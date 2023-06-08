// 从键盘上输入n个学生的信息，每个学生的信息包括学号、姓名、3门课的成绩，
// 然后输出：每个学生的信息以及总分最高的学生的信息（注意：学生信息包括学号、姓名、3门课成绩、总分以及平均成绩）。
// 要求采用动态内存分配和函数实现。

#include <iostream>
#include <string>
using namespace std;

struct Stu
{
    unsigned int no;
    string name;
    float score[3];
    float total_score;
    float average_score;
};

void input_data(Stu *stu){
    cout << "学号：";
    cin >> stu->no;
    cout << "姓名：";
    cin >> stu->name;
    cout << "语数外：";
    cin >> stu->score[0] >> stu->score[1] >> stu->score[2];
    stu->total_score = stu->score[0] + stu->score[1] + stu->score[2];
    stu->average_score = stu->total_score / 3;
}

void print_data(Stu *stu){
    cout << "学号：" << stu->no << endl;
    cout << "姓名：" << stu->name << endl;
    cout << "语数外：";
    cout << stu->score[0] << " " << stu->score[1] << " " << stu->score[2] << endl;
}

size_t find_max(Stu *stus, size_t n){
    size_t max_index = 0;
    for (size_t i = 1; i < n; i++){
        if (stus[i].total_score > stus[max_index].total_score){
            max_index = i;
        }
    }
    return max_index;
}

int main(){
    int n;
    cin >> n;
    Stu *stus = new Stu[n];
    for (int i = 0; i < n; i++){
        input_data(&stus[i]);
    }
    cout << "==== 全部学生信息 ====" << endl;
    for (int i = 0; i < n; i++){
        print_data(&stus[i]);
    }
    int max_index = find_max(stus, n);
    cout << "==== 总分最高的学生信息 ====" << endl;
    print_data(&stus[max_index]);

    delete [] stus;
}