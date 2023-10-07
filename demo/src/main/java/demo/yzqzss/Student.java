package demo.yzqzss;
// 定义一个Student类，包含id，name、sex、age成员变量
// 为 Student 类创建2个构造方法，一个无参构造方法，一个为有参构造方法；实现成员变量（类的属性）的初始化操作。
// 在main方法中创建Student类的对象并输出对象的属性值。

import lombok.Getter;
import lombok.Setter;

public class Student {
    @Getter
    private int id;

    @Getter
    @Setter
    private String name;

    @Getter
    @Setter
    private String sex;

    @Getter
    @Setter
    private int age;

    public Student() {
        this.id = 0;
        this.name = "";
        this.sex = "";
        this.age = 0;
    }

    public Student(int id, String name, String sex, int age) {
        assert (id > 0);
        assert (age > 0);

        this.id = id;
        this.name = name;
        this.sex = sex;
        this.age = age;
    }

    public String getAllAttributes() {
        String attrs = "";
        attrs += "ID: " + this.getId() + "\n";
        attrs += "Name: " + this.getName() + "\n";
        attrs += "Sex: " + this.getSex() + "\n";
        attrs += "Age: " + this.getAge() + "\n";
        return attrs;
    }
}