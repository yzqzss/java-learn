package demo.yzqzss;

public class Main_student {
    public static void main(String[] args) {
        Student student1 = new Student();
        student1.setName("bulabula");
        Student student2 = new Student(1, "hahaa", "laaala", 18);

        // 输出对象属性值
        System.out.println(student2.getAllAttributes());
    }
}
