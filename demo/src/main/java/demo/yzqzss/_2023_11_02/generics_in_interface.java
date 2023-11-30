package demo.yzqzss._2023_11_02;

import lombok.Getter;
import lombok.Setter;

public class generics_in_interface {
    public static void main(String[] args) {
        Fly<Integer> f = null; // 声明接口变量
        f = new FlyImpl<Integer>(9000); // 实例化接口变量
        System.out.println("飞行高度：" + f.getHight() + "m");
    }
}


interface Fly<T> { // 泛型接口
    public T getHight(); // 抽象方法
}

class FlyImpl<T> implements Fly<T> { // 实现泛型接口
    @Getter
    @Setter
    private T hight;
    public FlyImpl(T hight) { // 构造方法来设置成员变量
        this.setHight(hight);
    }
}
