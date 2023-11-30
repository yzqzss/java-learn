package demo.yzqzss._2023_11_02;

import lombok.Getter; // lombok 插件，用于自动生成 getXXX()

public class generics_in_use {
    public static void main(String[] args) {
        // 创建 Student 对象，泛型为 Teacher
        Student<Teacher> student = new Student<Teacher>("2019211001001101", "张三", new Teacher("2019211001001101", "教师办公室"));
        System.out.println(student); // 隐式调用 toString()
    }
}
/**
 * Student 类，泛型为 E
 */
class Student<E> {
    // 3 member variables
    @Getter
    private String id;
    @Getter
    private String name;
    @Getter
    E e;
    // constructor
    public Student(String id, String name, E e) {
        this.id = id;
        this.name = name;
        this.e = e;
    }
    // override toString()
    @Override
    public String toString() {
        return "学号：" + id + "，姓名：" + name + " | " + e;
    }
}
/**
 * Teacher
 */
class Teacher {
    private String id;
    private String office;

    Teacher(String id, String office) {
        this.id = id;
        this.office = office;
    }
    @Override
    public String toString() {
        return "教师编号：" + id + "，教师办公室：" + office;
    }
        
}
