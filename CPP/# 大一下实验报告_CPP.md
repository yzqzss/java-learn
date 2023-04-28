# 大一下实验报告_CPP

## 20230324

三道原样照搬公式的题。

### 1.1

```cpp
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x;
    cin>>x;
    cout<<sqrt(1+1/(x+(1/(x+1))))<<endl; // 题目
}
```

### 1.2

```cpp
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a,b;
    double part1;
    int part2;
    cin>>a>>b;
    part1 = abs(a * a - b * b);
    part2 = int(a - b);
    cout<<part1+part2<<endl;
}
```

### 1.3

```cpp
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x;
    cin>>x;
    cout<<log10(1+sqrt(1+(x*x)))<<endl;
}
```

### 2.1

```cpp
// 简单观察算子优先级
#include <iostream>
using namespace std;

int main()
{
    int i = 8, j = 10, m, n;
    // origin
    // m = ++i + j++;
    // n = ++i + jm dj++j + m;
    // modified
    m = i++ + j++;
    n = i++ + j++ + m;
    cout << i << " " << j << " " << m << " " << n << endl;
}
// ori output: 10 12 19 41
// mod output: 10 12 18 38
```

### additonal

```cpp
// 正整数，偶数除以2，奇数乘3加1，最后都会变成1。
// 求一个数经过多少步变成1。
#include <iostream>
using namespace std;

int main(){
    int x;
    int step=0;
    cin>>x;
    while (x != 1){
        if ( x % 2 == 0 ){
            x/=2;
            step++;
        } else {
            x=(3*x+1)/2;
            step++;
        }
    }
    cout<<step<<endl;
}
```

## 20230331

### contest_16_1

```cpp
// 在一个笼子里有鸡和兔子宫n只，它们共有m只脚，请用算式分别计算鸡和兔子各是多少，
// Input
// 输入两个整数：n和m用空格隔开
// Output
// 输出两个整数，分别代表鸡和兔 的数量，用空格隔开

#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int x,y;
    x=(4*n-m)/2;
    y=n-x;
    cout<<x<<" "<<y;
}
```

### contest_16_2

```cpp
// 输入一行四个整数a，b，c，d，数与数之间用空格分开
// Output
// 输出一行：四个从小到大排序的整数a，b，c，d，数与数之间用空格分开

#include <iostream>
using namespace std;

int main(){
    int list[4];
    for (int i = 0;i<4;i++){
        cin>>list[i];
    }
    for (int i = 0;i<4;i++){
        for (int j = 0;j<4;j++){
            if (list[i]<list[j]){
                swap(list[i],list[j]);
            }
        }
    }
    cout<<list[0]<<" "<<list[1]<<" "<<list[2]<<" "<<list[3];
}
```

### contest_16_3

```cpp
#include <iostream>
using namespace std;

bool isLeapYear(int y){
    if (y%4==0 && y%100!=0 || y%400==0){
        return true;
    }
    return false;
}

int main(){
    int y;
    cin>>y;
    if (isLeapYear(y)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}
```

### contest_16_4

```cpp
// 成绩 -> 等级
#include <iostream>
using namespace std;


int main(){
    int x;
    cin>>x;
    if (x>100) {cout<<"[Error] 爆分了，你厉害！";return 1;}
    switch (x/10){
        case 10:
        case  9:cout<<"A";break;
        case  8:cout<<"B";break;
        case  7:cout<<"C";break;
        case  6:cout<<"D";break;
        default:cout<<"E";
    }
}
```

## 20230407

### contest_16_5

```cpp
// 求 6^i 一直加到 6^n 之和除以7的余数
#include <iostream>

// for i in range(1,100):
//     print((6**i)%7) # 可以发现余数 6 1 6 1 6 1 循环

int main(){
    long long int n;
    std::cin>>n;
    if (n%2){
        puts("6");
    }else{
        puts("0");
    }
}
```

### contest_16_6

```cpp
// 编程计算：六位数20□□08能被99整除，□□是多少？

#include <iostream>

int main(){
    int start = 200008, end = 209908;
    for (;start<=end;start+=100){
        if (!(start%99)){ // trick: 0 ==> true
            std::cout<<start/100%100;
        }
    }
}
```

### contest_16_7

> “每a个人站成一排。”队站好后，小队长进来报告：“最后一排只有x个人。”  
> “每b个人站成一排。”小队长报告：“最后一排只有y个人。”  
> “每c个人站成一排。”小队长报告：“最后一排只有z个人。”  
> 这队士兵最少有多少人？”  
> Input  
> 输入共三行  
> 第一行，空格间隔的两个整数 a和x  
> 第二行，空格间隔的两个整数 b和y  
> 第三行，空格间隔的两个整数 c和z  
> Output  
> 输出一个整数，表示满足条件的最少人数。  

```cpp
#include <iostream>
using namespace std;
int main(){
    unsigned int a, x, b, y, c, z;
    for (;;){
    cin>>a>>x>>b>>y>>c>>z;
    int total = 0;
    for (int i=0;;i++){
        total = a*i + x;
        if (total<0) {
            cout<<"No answer"<<endl;
            break;
        }
        if (((total%b == y) || (total%b == 0 && y == a))
        && ((total%c == z) || (total%c == 0 && z == a))){
            cout<<total<<endl;
            break;
        }
    }
    }
}
```

### contest_16_8

```cpp
// P12030
// 我家住在一条短胡同里，这条胡同的门牌号从1开始顺序编号。若所有的门牌号之和减去我家门牌号的两倍，恰好等于n，
// 求我家的门牌号及总共有多少家。数据保证有唯一解。
// Input
// 一个正整数n。
// Output
// 一行，包含两个正整数，分别是我家的门牌号及总共有多少家，中间用单个空格隔开。

// 这道题的示例代码有问题，由于 `s>n&&(s-n)%2==0` ，所以只要当 s > n 且 s-n 是 2 的倍数，就会 break 。
// 问题是 (s-n)%2==0 这样写并不能确保满足答案 s-2j==n ，它会把 4、6、8 等错误倍数也强行算出来。
// 不过测试点给的数值好像都是正常的。

#include <iostream>

using namespace std;

int sum_doors(int no){
    if (no < 1){
        return -1;
    }
    int sum = no * (no + 1) / 2;
    if (sum<=0){
        return -1;
    }
    return sum ;
}

void value_handler(int x){
    if (x<=0){
        cout<<"RuntimeError: Value Error"<<endl;
    }
}

int main(){
    int n, no=1, sum_of_doors;
    cin >> n;
    for (no;;no++){
        sum_of_doors = sum_doors(no);
        value_handler(sum_of_doors);
        if (sum_of_doors <= n){
            continue;
        }
        if ((sum_of_doors - n) % 2 == 0){
            break;
        }
    }
    int my_no = (sum_of_doors - n) / 2;
    if (sum_of_doors - 2*my_no != n){
        cout<<"No answer"<<endl;
    }else{
        cout<<my_no<<" "<<no<<endl;
    }
}
```

## 20230414

### contest_16_9

```cpp
// 用递归函数求两个正整数m，n的最大公约数。

#include <iostream>
using std::cout, std::cin, std::endl;

int gcd(int m, int n){
    if (n == 0){
        return m;
    }else{
        return gcd(n, m % n);
    }
}

int main(){
    int m,n;
    cin>>m>>n;
    cout<<gcd(m,n)<<endl;
}
```

### contest_16_10

```cpp
// 输入正整数n和m，找出1至n（n<100000）之间各位上的数字之和为m的所有整数，
// 然后输出：符合条件的整数个数作为函数返回值。
// Input
// 输入两个正整数n和m，用空格分开
// Output
// 输出：满足条件的所有正整数的个数

#include <iostream>
using std::cout, std::cin, std::endl;

int sum_every_bits(int x){
    int _sum=0;
    while (x!=0){
        _sum += (x%10);
        x/=10;
    }
    return _sum;
}

bool is_every_bits_match(int num_to_sum, int to_match){
    if (sum_every_bits(num_to_sum) == to_match){
        return true;
    }else{
        return false;
    }
}

int total_hits(int n, int m){
    int hits = 0;
    for (int i=1;i<=n;i++){
        if (is_every_bits_match(i, m)){
            hits++;
        }
    }
    return hits;
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<total_hits(n,m)<<endl;
}
```

### contest_16_11

```cpp
// 函数--两最大质数积
// Description
// 两个质数的和是n，它们的积最大是多少？
// Input
// 输入一个大于4的偶数n
// Output
// 输出两质数乘积最大的结果

#include <iostream>
#include <math.h>
using std::cin, std::cout, std::endl, std::sqrt;

bool is_prime(int x){
    if (x <= 1) return false;
    if (x == 2) return true;
    if (x%2 == 0) return false;

    int end = sqrt(x);
    for (int i = 3; i <= end; i+=2){
        if (x%i == 0) return false;
    }

    return true;
}

int max_prime_product(int prime_sum){
    int _max = 0;
    int __tmp = 0 ;
    for (int i=2;i<=prime_sum/2;i++){
        if (is_prime(i) && is_prime(prime_sum-i)){
            __tmp = i * (prime_sum-i);
            if (__tmp > _max) _max = __tmp;
        }
    }

    return _max;
}

int main(){
    int n;
    cin>>n;
    cout<<max_prime_product(n);
}
```

### contest_16_12

```cpp
// 一个射击运动员打靶，靶一共有10环，连开10枪打中90环的可能性有多少种？

#include <iostream>
using std::cin, std::cout, std::endl;

int plans_count = 0; // 统计方案总数
const int MAX_SHOOTS = 10;
const int TARGET_SCORE = 90;
const int MAX_SINGLE_RING_SCORE = 10;

void lets_shoot_from(int shoot, int score_got) {
    if (shoot == MAX_SHOOTS && score_got == TARGET_SCORE) { // 打完了10枪，且总分为90分
        plans_count++;
        return;
    }
    if (shoot == MAX_SHOOTS || score_got > TARGET_SCORE) { // 打完了10枪，或者总分超过90分
        return;
    }

    // 下一枪需要达到的最小分数
    int min_score = (TARGET_SCORE - score_got) - (MAX_SHOOTS - shoot) * MAX_SINGLE_RING_SCORE;
    if (min_score < 0){
        min_score = 0;
    }
    for (int i = min_score; i <= MAX_SINGLE_RING_SCORE; i++) { // 下一枪打出的得分
        lets_shoot_from(shoot + 1, score_got + i);
    }
}

int main(){
    lets_shoot_from(0, 0);
    cout << plans_count << endl; // 92378
}
```
