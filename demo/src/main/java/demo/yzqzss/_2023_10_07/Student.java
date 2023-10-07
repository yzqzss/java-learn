// 定义一个Person类，包含id，name、sex、age成员变量
//  1.为 Person类创建构造方法，一个无参构造方法，一个为有参构造方法；
//  2. 添加每个成员变量的：set方法、get方法；添加“学习”方法
//  3.在main方法中创建2个Student类的对象，利用set方法修改并输出对象的值。
// 程序规范要求：  
// 1、程序功能实现，运行正常。
// 2、有注释，程序具有可读性。
// 3、程序输出或交互人性化。

package demo.yzqzss._2023_10_07;


import lombok.Getter;
import lombok.Setter;

public class Student {
    @Setter
    @Getter
    private int id;

    @Setter
    @Getter
    private String name;

    @Setter
    @Getter
    private String sex;

    @Setter
    @Getter
    private int age;

    public Student() {
        this.id = 0;
        this.name = null;
        this.sex = null;
        this.age = 0;
    }

    public Student(int id, String name, String sex, int age) {
        this.id = id;
        this.name = name;
        this.sex = sex;
        this.age = age;
    }

    public void study() {
        // show progress bar
        System.out.println(this.getName()+" is studying...");
        for (int i = 0; i < 4; i++) {
            System.out.print("\r");
            switch (i % 4) {
                case 0:
                    System.out.print("/");
                    break;
                case 1:
                    System.out.print("-");
                    break;
                case 2:
                    System.out.print("\\");
                    break;
                case 3:
                    System.out.print("|");
                    break;
            }
            try {
                // sleep 1s
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        System.out.print("  \r"); // clear screen
    }
}