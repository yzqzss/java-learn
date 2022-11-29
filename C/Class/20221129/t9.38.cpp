/*10个学生：学号、姓名、性别、年龄、三门课的成绩
计算总分和平均分，然后全部输出*/

#include "stdio.h"

float count(float data[3]){
    float sum = 0;
    for(int i=0; i<3; i++){
        sum += data[i];
    }
    return sum;
}

float avg(float data[3]){
    return count(data)/3;
}

struct students{
    int num;//学号
    char name[9];//姓名
    int sex;//0=女，1=男，其他以备后用（LGBT）。不然我就用 bool 了。
    int age;//age 不应该用出生日期来算吗，真要固定的话，作死欸。
    float score[3];//三门课程的成绩
};

students inputStudentData(){
    students student;
    printf("num | name | sex | age | score1 | score2 | score3\n");
    scanf("%d", &student.num);
    scanf("%s", student.name);
    scanf("%d", &student.sex);
    scanf("%d", &student.age);
    scanf("%f %f %f", &student.score[0], &student.score[1], &student.score[2]);
    return student;
};

void printStudentData(students student){
    printf("num: %d\n", student.num);
    printf("name: %s\n", student.name);

    if (student.sex == 0) printf("sex: 女\n");//女
    else if (student.sex == 1) printf("sex: 男\n");
    else printf("sex: LGBT(code=%d)\n", student.sex);//LGBT

    printf("age: %d\n", student.age);
    printf("scores: %.2f %.2f %.2f\n", student.score[0], student.score[1], student.score[2]);
    printf("total_score: %.2f | avg_score: %.2f\n", count(student.score), avg(student.score));
};

int main(){
    students student[10];
    printf("Note: sex 的参数：(0=女，1=男，其他备用（LGBT）；成绩可输入小数\n");
    for(int i=0; i<10; i++){
        printf("student %d:\n", i+1);
        student[i] = inputStudentData();
    };
    for(int i=0; i<10; i++){
        printf("--------------------\n");
        printStudentData(student[i]);
    };
}