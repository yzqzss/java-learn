// 定义一个结构体对象stu，成员包括学号、姓名、性别、语数外成绩。
// 定义一个指针变量pstu指向该结构体对象stu，通过对象法输入各成员的值，再利用指针法输出各成员的值。

#include <iostream>
#include <string>
using namespace std;

struct Stu
{
    unsigned int no;
    string name;
    bool sex; // 男->true, 女->false
    float score[3];
};

int main(){
    // Stu stu = {123, "小明", true, {60, 60, 60}};
    Stu stu;
    Stu *pstu = &stu;
    cout << "学号：";
    cin >> stu.no;
    cout << "姓名：";
    cin >> stu.name;
    cout << "性别：";
    string sex;
    cin >> sex;
    if (sex.compare("男") == 0){
        stu.sex = true;
    }else{
        stu.sex = false;
    }
    cout << "语数外：";
    cin >> stu.score[0] >> stu.score[1] >> stu.score[2];


    cout << "学号：" << pstu->no << endl;
    cout << "姓名：" << pstu->name << endl;
    if (pstu->sex){
        cout << "性别：男" << endl;
    }else{
        cout << "性别：女" << endl;
    }
    cout << "语数外: " << pstu->score[0] << " " << pstu->score[1] << " " << pstu->score[2] << endl;
}