# log

## 20220927

### helloWorld

```c
#include <stdio.h>

int main(){
    printf("Hello World!");
}
```

### cos()

```c
#include<stdio.h>
#include<math.h>

int main(){
    float x;
    scanf("%f",&x);
    printf("%f",cos(x));
}
```

### monckeyPatchAdd

```c
// 把加法包装一下，就叫“设计”加法器？？
#include<stdio.h>

int add(int a, int b){
    return a+b;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",add(a,b));
}
```

## 20221004

### t2.1 查看各数据类型的字节大小

```c
#include "stdio.h"
#define s sizeof

int main(){
    char c;
    short int si; int i;long int li;// 看环境。我的环境里，long int == long long int
    float f; double lf;

    printf("c, si, i, li, f, lf\n");
    printf("%zd,  %zd, %zd,  %zd, %zd, %zd",s(c), s(si), s(i), s(li), s(f), s(lf));
}
```

### t2.12 `++`/`--`的运算

```c
#include "stdio.h"

// 冷知识，前置++比后置++快一点点。但是编译器优化后，二进制没有任何区别。
int main(){
    int init=1,a,b,c;
    a=init++;
    b=init++;
    c=init++;
    printf("%d %d %d\n", a,b,c);
    a=++init;
    b=++init;
    c=++init;
    printf("%d %d %d\n", a,b,c);
}
```

### t2.45 把 int 以 ASCII 来打印

```c
#include "stdio.h"

int main(){
    unsigned int a=65,b=66,c=67;
    printf("%c %c %c",a,b,c);
}

// 16 2.1   29  2.12
```

## 20221011

### t2.46

```c
// 知三角形的3边，求面积
#include <stdio.h>
#include <math.h>

int main(){
    // 不太优美，但又不是不能用 :-D
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double c_cos,c_sin;
    c_cos = ( (a*a)+(b*b)-(c*c) ) / (double)(2*a*b);
    c_sin = sqrt(1-(c_cos*c_cos));
    double S = b*a*c_sin/2;
    printf("%lf", S);
}
```

### t2.48

```c
// “先 int() 再 +”与“先 + 再 int()”
#include<stdio.h>

int main(){
    double b=35.425,c=52.954;
    int a1=b+c;
    int sum = (int)b+(int)c;
    printf("a1=%d\nint_sum=%d",a1,sum);
}
```

### t2.51

```c
// 与或非
#include<stdio.h>

int main(){
    int a=12,b=18,c=12;
    printf("%d\n%d\n%d\n", a&&b, a||b, a&&c);
}
```

### t2.53

```c
#include<stdio.h>

int main(){
    int time_sec=10*60;
    int forahead = 15*time_sec;
    printf("%d", forahead/(20-15)/60);
}
```

## 20221018

### t4.28
<!-- 开始使用VSC -->
```c
/*分支结构---成绩等级

Description

根据输入的学生成绩给出相应的等级，

大于或等于90分的等级为A，80～89为B等级，…，60分以下的等级为E，

其余每10分为一等级。

Input

输入一个正整数

Output

输出学生成绩对应的等级*/


#include <stdio.h>

/*
int main(){
    int x;
    scanf("%d",&x);
    if      (x>=90) printf("A");
    else if (x>=80) printf("B");
    else if (x>=70) printf("C");
    else if (x>=60) printf("D");
    else            printf("E");
}
*/

int main(){
    int x;scanf("%d",&x);
    if (x>100) {printf("ERROR: 爆分了，你厉害！");return 1;}
    switch (x/10){
        case 10:
        case  9:printf("A");break;
        case  8:printf("B");break;
        case  7:printf("C");break;
        case  6:printf("D");break;
        default:printf("E");
    }
}
```

### t4.29

```c
#include <stdio.h>

int main(){
    double x,y;scanf("%lf %lf",&x,&y);//输入 x,y
    int ctl;
    if      (x>=0 && y>=0) ctl=1;
    else if (x>0  && y<=0) ctl=2;
    else if (x<0) ctl=3;
    else {printf("Error");return 1;}

    double z;
    switch (ctl){
        case 1 : z = ((x*x+1)*y)/(x*x+2);   break;
        case 2 : z = (x-2)/(y*y+1);         break;
        case 3 : z = x+y;                   break;
        default: {printf("Error");          return 1;}
    }

    printf("%.2f",z);
}
```

### t4.32

```c
/*给定一个整数n，判断它能否被3，5，7整除*/

#include <stdio.h>

int main(){
    int n;scanf("%d",&n);
    int list[] = {3,5,7};
    for (int i=0;i<3;i++){
        if (n%list[i]==0) printf("%d ",list[i]);
    }
}
```

## 20221025

### t5.20

```c
/*判断一个数是否为素数*/

// <- 以下代码复制于 n55.cpp(见 GitHub repo)

#include <stdio.h>
#include <math.h>

#define True 1
#define False 0

int count=0;
int numList[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};// len(numList[])  =  15

int isPrime(int x){
    //这部分代码写成单独的函数，直接 return 就能结束执行，避免放 main() 里会产生多层 break 和多余的判断混乱。

    if (x<=47){
        //# 过一遍 被除数 小数字的碰撞筛查:
        for (int location=0; location<=14; location++){
            //## 先看是否与 numList[] 相等（T）
            if (x  ==  numList[location]){return True ;}
        }
    }

    //# 过一遍 除数 小数字的碰撞筛查:
    for (int location=0; location<=14; location++){
        //## 再看能否被 numList[] 整除（F）
        if (x%numList[location] == 0){return False;}
    }
    
    //# 碰撞不了，就只能遍历了：
    // int numTestRange_END   = x/2 ;
    //## 确定遍历终止点，n除以2 之后是没价值的除数。
    // UPDATE: 这种算法太慢，废弃。
    int numTestRange_END   = sqrt(x);
    //## 查了 [素数 - 维基百科](https://zh.wikipedia.org/zh-cn/质数#試除法) ，发现开根能减少遍历范围。

    int numTestRange_START = 53;
    //## 确定遍历开始点，[0,52] 的除数在碰撞筛查时已经检查过了，所以从 53 开始。
    
    for (int numTest=numTestRange_START; numTest<=numTestRange_END; numTest+=2){
        // numTest+=2 以便跳过偶数。减少一般的计算量。 ref:[试除法 - 维基百科]
        // 跳过偶数！我怎么没想到呢。
        if  (x%numTest == 0){return False;}
    }
    
    return True;
}

// 以上代码重用于 n55.cpp->

int main(){
    int x;
    scanf("%d",&x);
    if (isPrime(x)){printf("Yes");}
    else           {printf("No"); }
}
```

### t5.35

```c
/*n 分解成质因子连乘的形式输出*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i=2;i<=n;i++){
        while(n%i==0){
            printf("%d*",i);
            n=n/i;
        }
    }
    printf("\b");// 掩耳盗铃般删除最后的 * 号，简单粗暴 :-D
}
```

### t5.37

```c
/*求 Sn=a+aa+aaa+aaaa+…… 的值*/

#include <stdio.h>

int main(){
    int a,n;
    scanf("%d%d",&a,&n);
    int sum=0;
    int tempNum=0;
    for(int i=1;i<=n;i++){
        tempNum=tempNum*10+a;
        sum+=tempNum;
        // printf("%d\n",tempNum);
    }
    printf("%d", sum);
}
```

### t5.41

```c
/*打印99乘法表*/

#include <stdio.h>

int main(){
    for (int i=1;i<=9;i++){
        for (int j=1;j<=i;j++){
            printf("%d*%d=%d\t",j,i,i*j);
        }
        printf("\n");
    }
}
```

### t5.45

```c++
/*已知 abc+cba=1333,其中 a、b、c 均为一个数字，求 a、b、c 的值*/

#include<iostream>
using namespace std;

int main(){
    for (int a=1;a<=9;a++){
        for (int b=0;b<=9;b++){
            for (int c=1;c<=9;c++){
                if ((a*100+b*10+c) + (c*100+b*10+a) == 1333){
                    cout<<a<<" "<<b<<" "<<c<<"\n";
                }
            }
        }
    }
    
    
}
```

## 20221102

### t6.38

```c
#include <stdio.h>
#include <math.h>


#define True 1
#define False 0

int n,x;
int _x;
int numList[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};// len(numList[])  =  15

int isPrime(int x){

    if (x<=47){
        for (int location=0; location<=14; location++){    
            if (x  ==  numList[location]){return True ;}
        }
    }

    
    for (int location=0; location<=14; location++){
        if (x%numList[location] == 0){return False;}
    }
    
    int numTestRange_END   = sqrt(x);
    int numTestRange_START = 53     ;
    
    for (int numTest=numTestRange_START; numTest<=numTestRange_END; numTest+=2){
        if  (x%numTest == 0){return False;}
    }
    
    return True;
}

int main(){
    // scanf("%d",&n);
    n=100;
    for (x = 10; x<=n; x++){
        if (isPrime(x) == True){
            int first = x/10;
            int last  = x%10;
            _x = last*10 + first;
            if (isPrime(_x)){
                printf("%d\n", x);
            }
        }
    }
    
    // printf("%d",count);
}
```

## 20221108

### 100636

```c
/*编写程序，用冒泡法对10个整数按升序排序，并输出。*/

#include <stdio.h>

int main(){
    int a[10];
    for (int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }
    int temp;
    for (int i=0; i<10; i++){
        for (int j=0; j<9-i; j++){
            if (a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for (int i=0; i<10; i++){
        printf("%d ",a[i]);
    }
}
```

### 103204

```c
/*使用调用自定义函数的形式百年城求s=m!+n!+k!。要求m 、n、k的值从键盘输入。*/

#include <stdio.h>

int factorial(int num){
    if (num < 1) printf("error");
    int sum=1;
    for (int i=1;i<=num;i++){
        sum*=i;
    }
    return sum;
}

int main(){
    int m,n,k;
    scanf("%d %d %d",&m,&n,&k);
    int s=factorial(m)+factorial(n)+factorial(k);
    printf("%d",s);
}
```

## 20221115

### t7.48

```c
/* 
定义数组 int a[4][6], b[4][6], c[4][6]
1. 从键盘输入数据给数组 a、b
2. 将 a 与 b 各对应元素做比较，如果相等，则数组 c 的对应元素 = 0 。若 a>b -> c=1 若 a<b -> c=-1
*/

#include <stdio.h>

int a[4][6],b[4][6],c[4][6];

void loadFromKeyboard(char obj){
    for (int x=0;x<4;x++){
        for (int y=0;y<6;y++){
            printf("Input %c[%d][%d]:",obj,x,y);
            if (obj == 'a') scanf("%d", &a[x][y]);
            if (obj == 'b') scanf("%d", &b[x][y]);
            // if (obj == 'c') scanf("%d", &c[x][y]);
        }
    }
}

void comperAWithB_toChangeC(){
    for (int x=0;x<4;x++){
        for (int y=0;y<6;y++){
            if      (a[x][y] > b[x][y]) c[x][y]=1;
            else if (a[x][y] < b[x][y]) c[x][y]=-1;
            else                        c[x][y]=0;
        }
    }
}

void printC(){
    for (int x=0;x<4;x++){
        for (int y=0;y<6;y++){
            printf("c[%d][%d]=%d\t",x,y,c[x][y]);
        }
        printf("\n");
    }
}

int main(){
    loadFromKeyboard('a');
    loadFromKeyboard('b');
    comperAWithB_toChangeC();
    printC();
}
```

### t7.57

```c
/*在二维数组中生成杨辉三角*/

#include <stdio.h>

int main(){

    int max = 20;// 输出多少行

    int a[max][max];
    int i,j;
    for(i=0;i<max;i++){
        a[i][0]=1;
        a[i][i]=1;
    }
    for(i=2;i<max;i++){
        for(j=1;j<i;j++){
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(i=0;i<max;i++){
        for(j=0;j<=i;j++){
            printf("%6d",a[i][j]);
        }
        printf("\n");
    }
}
```

## 20221122

### t8.38

```c
/*
输入3个整数，并从大到小排序输出
用指针来做
*/

#include "stdio.h"

int main(){
    int list[3];
    int *p=list;
    int i,j,temp;
    for(i=0;i<3;i++){
        scanf("%d",p+i);
    }
    for (i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            if(*(p+i)<*(p+j)){
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    for(i=0;i<3;i++){
        printf("%d ",*(p+i));
    }
}
```

### t8.40

```c
/*
有3个整数变量 ijk，设置3个对应指针 p123，然后通过指针使 ijk 的值顺序交换，即
i 的原值给j
j 给 k
k 给 i

输出 ijk 的原值和新值*/

#include "stdio.h"

int main(){
    int i=1,j=2,k=3;
    int *p1=&i,*p2=&j,*p3=&k;
    int temp;
    printf("Before: %d %d %d\n",i,j,k);
    temp=*p1;
    *p1=*p3;
    *p3=*p2;
    *p2=temp;
    printf("After: %d %d %d\n",i,j,k);
}
```

### t8.46

```c
/*
输入15个证书存入一组数组，再逆序重新存放，然后输出
用指针来做*/

#include "stdio.h"

int main(){
    int len_list=15;
    int list[len_list];
    int *p=list;

    //input
    for (int i=0;i<len_list;i++){
        scanf("%d",p+i);
    }

    //reverse
    int temp;
    for (int i=0;i<len_list/2;i++){
        temp=*(p+i);
        *(p+i)=*(p+len_list-1-i);
        *(p+len_list-1-i)=temp;
    }

    //output
    for (int i=0;i<len_list;i++){
        printf("%d ",*(p+i));
    }
}
```

## 20221129

### t9.37

```c
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
```

### t9.38

```c
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
    int num; //学号
    char name[61]; //姓名 (课本用的 8 bytes)
    // 要为少数民族的长姓名和 UTF8 预留更大的空间，垃圾课本就没考虑这个
    int sex;
    //0=女，1=男，其他以备后用（未知或者LGBT）
    int age;
    //age 不应该用出生日期来算吗，真要固定的话，作死欸
    float score[3];
    // 我知道，实际开发中，成绩、金额这些应该用 int 来存储，只是显示的时转换一下
    // 但现在又不是实际开发，这样又不是不能用 :-D
};

struct students inputStudentData(){
    struct students student;
    printf("num | name | sex | age | score1 | score2 | score3\n");
    scanf("%d", &student.num);
    scanf("%s", student.name);
    scanf("%d", &student.sex);
    scanf("%d", &student.age);
    scanf("%f %f %f", &student.score[0], &student.score[1], &student.score[2]);
    return student;
};

void printStudentData(struct students student){
    printf("num: %d\n", student.num);
    printf("name: %s\n", student.name);
    
    if (student.sex == 0) printf("sex: 女\n");//女
    else if (student.sex == 1) printf("sex: 男\n");
    else printf("sex: Other(code=%d)\n", student.sex);
    
    printf("age: %d\n", student.age);
    printf("scores: %.2f %.2f %.2f\n", student.score[0], student.score[1], student.score[2]);
    printf("total_score: %.2f | avg_score: %.2f\n", count(student.score), avg(student.score));
};

int main(){
    struct students student[10];
    printf("Note: sex 的参数：(0=女，1=男，其他备用；成绩可输入小数\n");
    for(int i=0; i<3; i++){
        printf("student %d:\n", i+1);
        student[i] = inputStudentData();
    };
    for(int i=0; i<3; i++){
        printf("--------------------\n");
        printStudentData(student[i]);
    };
}

```
