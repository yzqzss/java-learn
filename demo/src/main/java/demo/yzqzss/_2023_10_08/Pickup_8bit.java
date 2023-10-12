package demo.yzqzss._2023_10_08;

// 将任意数字的低8位(bit)取出来，用切片

public class Pickup_8bit {
    public static void main(String[] args) {
        int unm = 1342734234;
        int low8bit = unm & 0xff;
        System.out.println(low8bit);
    }
}
