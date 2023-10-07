package demo.yzqzss._2023_10_07;

public class Main_Student {
    public static void main(String[] args) {
        // 在main方法中创建2个Student类的对象，并为对象属性赋值，输出对象的姓名和年龄。
        Student student1 = new Student(111, "呼呼呼", "男", 17);
        Student student2 = new Student(222, "啦啦啦", "女", 20);
        student1.setAge(18);

        System.out.println("Name: "+student1.getName()+"\tAge: "+student1.getAge());
        System.out.println("Name: "+student2.getName()+"\tAge: "+student2.getAge());

        student1.study();
        student2.study();
    }
}