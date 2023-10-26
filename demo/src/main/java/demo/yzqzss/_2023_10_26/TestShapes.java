package demo.yzqzss._2023_10_26;

public class TestShapes {
    public static void main(String[] args){
        Shape[] shapes = new Shape[4];
        shapes[0] = new Circle(1.5);
        shapes[2] = new Circle(-2);
        shapes[1] = new Rectangle(10.5, 2);
        shapes[3] = new Rectangle(-3, 4);

        for (Shape shape : shapes) {
            System.out.println(shape.getArea());
        }
    }
}
