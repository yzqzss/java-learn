package demo.yzqzss._2023_10_08;

public class RandomScores {
    public static void main(String[] args) {
        int[] scores = new int[100];
        for (int i = 0; i < scores.length; i++) {
            scores[i] = (int) (Math.random() * 100 + 0.5);
        }
        for (int i = 0; i < scores.length; i++) {
            System.out.println(scores[i]);
        }
    }
}
