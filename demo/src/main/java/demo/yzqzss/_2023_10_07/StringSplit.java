package demo.yzqzss._2023_10_07;

import java.util.Scanner;

// 如果含有任意的空格、数字、标点符号，则切片

public class StringSplit {
    public static void main(String[] args) {

        String regex = "[\\s\\d\\p{Punct}]+"; // \s: 空格 \d: 数字 \p{Punct}: 标点符号(unicode)

        // read stdin
        System.out.println("Input:");
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        // close stdin
        scanner.close();

        System.out.println("Result:");
        String[] words = input.split(regex);
        for (String word : words) {
            System.out.println(word);
        }
    }
}
