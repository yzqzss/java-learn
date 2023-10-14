package demo.yzqzss._2023_10_12;

public class FakeComputer {
    public class RAM {
        // 4k blocks
        public boolean[] mem_index;
        private boolean mem_loaded = false;
        public void setup_memindex(int _4k_blocks){
            assert _4k_blocks >= 0;
            assert mem_loaded == false;
            this.mem_index = new MemView().setup_memindex(16);
            mem_loaded = true;
        }

    }

    public static class CPU {
        // Carry Flag
        public boolean CF = false; // TODO
        // Overflow Flag
        public boolean OF = false;
        // Zero Flag
        public boolean ZF = false;
        // Sign Flag
        public boolean SF = false;
        
        // CS
        public int CS = 0; // TODO
        // IP
        public int IP = 0;

        public void main_loop(byte[] code_segment){
            while (code_segment[IP] != '\0') {
                if (code_segment[IP] == 0b00000011) {
                    ADD(code_segment);
                    continue;
                }
                if (code_segment[IP] == 0b00000100) {
                    MOV(code_segment);
                    continue;
                }
                if (code_segment[IP] == 0b00000101) {
                    RET(); // TODO
                    break;
                }
                if (code_segment[IP] == 0b00000110) {
                    JUMP(code_segment);
                    continue;
                }
                if (code_segment[IP] == 0b00000111) {
                    AND(code_segment);
                    continue;
                }
            }
        }

        // 00000011
        public void ADD(byte[] code_segment){
            // ADD ip+1, ip+2 -> ip+1
            // dest += src
            // signed add
            int result = code_segment[IP + 1] + code_segment[IP + 2];
            if (result > 127 || result < -128) {
                this.OF = true;
            }
            if (result == 0) {
                this.ZF = true;
            }
            if (result < 0) {
                this.SF = true;
            }
            code_segment[IP + 1] = (byte)result;
            this.IP += 3;
        }
        // 00000100
        public void MOV(byte[] code_segment){
            // MOV dest(ip+offset), src(ip+offset)
            code_segment[code_segment[IP + 1]] = code_segment[code_segment[IP + 2]];
            this.IP += 3;
        }
        // 00000101
        public void RET(){
            // TODO
        }
        // 00000110
        public void JUMP(byte[] code_segment){
            this.IP = code_segment[IP + 1];
        }
        // 00000111
        public void AND(byte[] code_segment){
            // AND ip+1, ip+2 -> ip+1
            code_segment[IP + 1] &= code_segment[IP + 2];
            if (code_segment[IP + 1] == 0) {
                this.ZF = true;
            }
            if (code_segment[IP + 1] < 0) {
                this.SF = true;
            }
            this.IP += 3;
        }
        // 00001000
        public void XOR(byte[] code_segment){
            // XOR ip+1, ip+2 -> ip+1
            code_segment[IP + 1] ^= code_segment[IP + 2];
            if (code_segment[IP + 1] == 0) {
                this.ZF = true;
            }
            if (code_segment[IP + 1] < 0) {
                this.SF = true;
            }
            this.IP += 3;
        }

        // TODO: OS level func, should be in another OS class
        public static byte[] malloc(boolean[] mem_index, int size_t){
            int _4k_blocks = (size_t + 4095) / 4096;
            assert _4k_blocks >= 0;
            assert mem_index.length >= _4k_blocks;
            
            // search continuous unused memory
            int start = -1;
            int end = -1;
            int count = 0;
            for (int i = 0; i < mem_index.length; i++) {
                if (mem_index[i]) { // used
                    count = 0;
                    start = -1;
                    end = -1;
                } else {
                    if (start == -1) {
                        start = i;
                    }
                    end = i;
                    count++;
                    if (count == _4k_blocks) {
                        break;
                    }
                }
            }
            
            if (count != _4k_blocks) {
                throw new OutOfMemoryError("No enough memory to malloc");
            }

            // mark those blocks as used
            for (int i = start; i <= end; i++) {
                mem_index[i] = true;
            }
            return new byte[_4k_blocks * 4096];
        }

        // TODO: OS level func, should be in another OS class
        public static void free(boolean[] mem_index, byte[] addr){
            // 天花板除
            int _4k_blocks = (addr.length + 4095) / 4096;
            assert _4k_blocks >= 0;
            assert mem_index.length >= _4k_blocks;

            int freed_blocks = 0;
            for (int i = 0; i < mem_index.length; i++) {
                if (mem_index[i]) { // used
                    mem_index[i] = false;
                    freed_blocks++;
                    if (freed_blocks == _4k_blocks) {
                        break;
                    }
                }
            }

            assert freed_blocks == _4k_blocks;
            addr = null; // gc
        }


        // TODO: OS level func, should be in another OS class
        public static void memcpy(byte[] dest, byte[] src, int n){
            // copies  n  bytes from memory area src to memory area dest.
            assert n >= 0;
            assert dest.length >= n;
            assert src.length >= n;

            for (int i = 0; i < n; i++) {
                dest[i] = src[i];
            }
        }

        // TODO: OS level func, should be in another OS class
        public static void memset(byte[] s, byte c, int n){
            // fills the first n bytes of the memory area pointed to by s with the constant byte c.
            assert s.length >= n;
            assert n >= 0;

            for (int i = 0; i < n; i++) {
                s[i] = c;
            }
        }

        // TODO: OS level func, should be in another OS class
        public static void RESET(boolean[] mem_index, byte[] mem, Fs fs){
            fs.mounted_files.clear(); // force close all files
            for (int i = 0; i < mem_index.length; i++) {
                mem_index[i] = false;
            }
            memset(mem, (byte)0, mem.length);
        }

        // TODO: OS level func, should be in another OS class
        public static void shutdown(Fs fs){
            fs.umount_all();
            System.exit(0);
        }
    }
    public class IO {
        Fs fs = new Fs();
        public int touch(String path){
            return fs.mount(fs.new NormalFile(path));
        }
        public int rm(String path){
            return fs.umount(path);
        }

        public int echo(FileBase file, byte[] stream) {
            return file.write(stream);
        }
        public int echo(String file, byte[] stream) {
            try {
                return echo(fs.get(file), stream);
            } catch (RuntimeException e){ // File Not Found
                touch(file);
                return echo(file, stream);
            }
        }
        
        public int read(FileBase file, byte[] out_addr) {
            return file.read(out_addr);
        }
        public int read(String file, byte[] out_addr) {
            return read(fs.get(file), out_addr);
        }
    }

    public static void main(String[] args){
        FakeComputer computer = new FakeComputer();
        
        RAM ram = computer.new RAM();
        ram.setup_memindex(16);
        byte[] buffer = CPU.malloc(ram.mem_index, 4096);
        MemView.printMemview(ram.mem_index);

        CPU.memset(buffer, (byte)0, buffer.length);
        
        FakeComputer.IO io = computer.new IO();

        io.fs.mount_all();

        io.echo("/dev/stdout", "0x7c00\n".getBytes());
        io.echo("/dev/stdout", "Input a string: ".getBytes());
        
        io.read("/dev/stdin", buffer);
        io.echo("/dev/stdout", buffer);

        // TODO: shell env to oprate files
        io.echo("/dev/stdout", "\n".getBytes());
        // TODO: shell::parse_cmdline

        byte[] buffer2 = CPU.malloc(ram.mem_index, 4096);
        io.echo("/somefile", "Hello, world! (disk text)\n".getBytes());
        io.read("/somefile", buffer2);
        io.echo("/dev/stdout", buffer2);

    }
}
