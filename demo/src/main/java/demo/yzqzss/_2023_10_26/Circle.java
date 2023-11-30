package demo.yzqzss._2023_10_26;

import lombok.Getter;
import lombok.Setter;

public class Circle extends Shape{
    @Setter
    @Getter
    double r;

    public Circle(double r){
        this.r = r;
    }

    @Override
    public double getArea(){
        return Math.PI * r * r;
    }
}
