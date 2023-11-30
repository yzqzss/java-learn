package demo.yzqzss._2023_10_26;

import lombok.Getter;
import lombok.Setter;

public class Rectangle extends Shape{
    @Setter
    @Getter
    double x;

    @Setter
    @Getter
    double y;

    public Rectangle(double x, double y){
        this.x = x;
        this.y = y;
    }

    @Override
    public double getArea(){
        return x * y;
    }
}