package demo.yzqzss._2023_10_12;

// 500元钱，每天增加10%；
// 1. 10天后有多少元钱？
// 2. 多少天后有10000元？

public class MoneyProblem {
    public static void main(String[] args) {
        double money = 500;
        int days = 0;
        while (money < 10000) {
            money *= 1.1;
            days++;
        }
        System.out.printf("%d天后 >= 10000 元\n", days);

        double moneyAfter10Days = 500 * Math.pow(1.1, 10);
        System.out.printf("10天后 %.2f 元\n", moneyAfter10Days);
    }
}
