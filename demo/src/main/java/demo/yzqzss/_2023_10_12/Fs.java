package demo.yzqzss._2023_10_12;

import java.util.Scanner;

// import demo.yzqzss._2023_10_12.FakeComputer.CPU;

import java.util.ArrayList;

public class Fs {
    ArrayList<FileBase> mounted_files = new ArrayList<FileBase>();


    public void mount_all(){
        mount(new DevStdout());
        mount(new DevStdin());
        mount(new DevNull());
        mount(new DevRandom());
    }
    public void umount_all(){
        mounted_files.clear();
    }

    public int mount(FileBase file){
        if (file == null) {
            return 1;
        }
        mounted_files.add(file);
        return 0;
    }
    public int umount(FileBase file){
        if (file == null) {
            return 1;
        }
        mounted_files.remove(file);
        return 0;
    }
    public int umount(String path){
        return umount(get(path));
    }

    public FileBase get(String path){
        for (FileBase file : mounted_files) {
            if (file.path.equals(path)) {
                return file;
            }
        }
        throw new RuntimeException("File not found: " + path);
    }

    class NormalFile extends FileBase {
        public NormalFile(String path){
            super(path, true, true);
        }

        @Override
        protected int read_(byte[] out_addr){
            // read file and write to out_addr
            try {
                Computer.CPU.memcpy(out_addr, this.content, this.content.length);
                return 0;
            } catch (Exception e) {
                return 1;
            }
        }

        @Override
        protected int write_(byte[] stream){
            try {
                assert stream.length <= this.content.length;
                Computer.CPU.memset(this.content, (byte)0, this.content.length);
                Computer.CPU.memcpy(this.content, stream, stream.length);
                return 0;
            } catch (Exception e) {
                return 1;
            }
        }
    }


    class DevStdout extends FileBase {
        public DevStdout(){
            super("/dev/stdout", false, true);
        }

        @Override
        protected int write_(byte[] stream){
            // decode stream and print to stdout
            
            // handle EOF
            int bytes_EOF_index = 0;
            // convert byte[] to char[]
            for (byte b : stream) {
                if (b == '\0') {
                    break;
                }
                bytes_EOF_index++;
            }
            if (bytes_EOF_index == 0) {
                bytes_EOF_index = stream.length;
            }

            String text = new String(stream, 0, bytes_EOF_index);
            System.out.print(text);
            return 0;
        }
    }

    class DevStdin extends FileBase {
        public DevStdin(){
            super("/dev/stdin", true, false);
        }

        @Override
        protected int read_(byte[] out_addr){
            // read stdin and write to out_addr
            try {
                Scanner scanner = new Scanner(System.in);
                byte[] stream = scanner.nextLine().getBytes();
                scanner.close();
                Computer.CPU.memcpy(out_addr, stream, stream.length);
            } catch (Exception e) {
                return 1;
            }
            return 0;
        }
    }

    class DevNull extends FileBase {
        public DevNull(){
            super("/dev/null", false, true);
        }

        @Override
        public int write_(byte[] stream){
            // black hole
            return 0;
        }
    }

    class DevRandom extends FileBase {
        public DevRandom(){
            super("/dev/random", true, false);
        }

        @Override
        public int read_(byte[] stream){
            // generate random bytes
            for (int i = 0; i < stream.length; i++) {
                stream[i] = (byte)(Math.random() * 256);
            }
            return 0;
        }
    }
}
