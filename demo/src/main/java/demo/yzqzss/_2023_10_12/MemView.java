package demo.yzqzss._2023_10_12;

public class MemView {
    public boolean[] setup_memindex(int _4k_blocks){
        assert _4k_blocks >= 0;
        boolean[] mem_index = new boolean[_4k_blocks]; // 0 -> unused, 1 -> used
        return mem_index;
    }

    public static void printMemview(boolean[] mem){
        for (int i = 0; i < mem.length; i++) {
            if (mem[i]) {
                System.out.print("1");
            } else {
                System.out.print("0");
            }
        }
        System.out.println();
    }
    public static void main(String[] args){
        MemView memView = new MemView();
        boolean[] mem = memView.setup_memindex(16);
        mem[0] = true;
        mem[1] = true;
        mem[2] = true;
        mem[3] = true;
        printMemview(mem);
    }
}