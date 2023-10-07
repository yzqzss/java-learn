package demo.yzqzss;

public class MultiPlus {
    // 1!+2!+...20! = ?
    public static void main(String[] args) {
        long sum = 0;
        for (int i = 1; i <= 20; i++) {
            long multi = 1;
            for (long j = 1; j <= i; j++) {
                multi *= j;
            }
            sum += multi;
        }
        System.out.println(sum);
    }
}