/*用结构体，输入一个学生的数学期中和期末成绩，计算并输出平均成绩*/

#include "stdio.h"

struct students
{
    float midScore;
    float finScore;
};

void printStudentInfo(struct students student){
    printf("mid: %.2f\n", student.midScore);
    printf("fin: %.2f\n", student.finScore);
    printf("avg: %.2f\n", (student.midScore+student.finScore)/2 );
}

int main(){
    struct students student;
    scanf("%f", &student.midScore);
    scanf("%f", &student.finScore);
    printStudentInfo(student);
}