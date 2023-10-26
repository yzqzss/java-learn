package demo.yzqzss._2023_10_20;


public class Demo4_4 {
    public static void main(String[] args) {
        int result = RectangleArea.getArea(13, 4);
        System.out.println("area: " + result);
    }
}


class RectangleArea {
    public static int getArea(int a, int b) {
        return a * b;
    }
}