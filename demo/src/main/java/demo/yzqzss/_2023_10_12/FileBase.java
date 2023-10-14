package demo.yzqzss._2023_10_12;

public class FileBase {
    String path;
    boolean readable;
    boolean writable;
    byte[] content = new byte[4096];

    public FileBase(){
        path = "";
        readable = false;
        writable = false;
    }

    public FileBase(String path, boolean readable, boolean writable){
        this.path = path;
        this.readable = readable;
        this.writable = writable;
    }

    public int write(byte[] stream){
        if (!writable) {    
            return 1;
        }
        return write_(stream);
    }
    // must @Override
    protected int write_(byte[] stream){
        return 1;
    }

    public int read(byte[] stream){
        if (!readable) {    
            return 1;
        }
        return read_(stream);
    }
    // must @Override
    protected int read_(byte[] stream){
        return 1;
    }
}