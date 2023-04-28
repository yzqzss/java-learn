// “每a个人站成一排。”队站好后，小队长进来报告：“最后一排只有x个人。”
// “刘邦又传令：“每b个人站成一排。”小队长报告：“最后一排只有y个人。”
// 刘邦再传令：“每c个人站成一排。”小队长报告：“最后一排只有z个人。”
// 这队士兵最少有多少人？”
// Input
// 输入共三行
// 第一行，空格间隔的两个整数 a和x
// 第二行，空格间隔的两个整数 b和y
// 第三行，空格间隔的两个整数 c和z
// Output
// 输出一个整数，表示满足条件的最少人数。

#include <iostream>
using namespace std;
int main()
{  
    int a,b,c,x,y,z,i,j,k;
    cin>>a>>x>>b>>y>>c>>z;
    for(i=1;;i++){
        j=a*(i-1)+x;
        if(j%b==y && j%c==z) break;
    }
    cout<<j<<endl;
  return 0;
}

// P12035 的示例代码没有考虑到 int 数据溢出，导致生成的测试点数据也跟着是错的。
// 比如测试点 3 ，可以算下 918187503%7617  == 3855，结果与测试点给的 x=7 不符。
// 对于错误的结果，只需要在示例代码的 #L40 加个 j < 0 的条件断点，你会发现它确实溢出了。
// 后面有些测试点的数据有些也是溢出了之后继续计算的得到的错误结果。
// 换成 long long int 后，一部分原先溢出的测试点还是会溢出。
// 另外，示例代码也没有考虑余为零的特殊情况，不知道有没有影响一些测试点。。。

// 为了过这道题，我直接把示例代码原封不动搬过来了，然后我自己写的如下：


// #include <iostream>
// using namespace std;
// int main(){
//     unsigned int a, x, b, y, c, z;
//     for (;;){
//     cin>>a>>x>>b>>y>>c>>z;
//     int total = 0;
//     for (int i=0;;i++){
//         total = a*i + x;
//         if (total<0) {
//             cout<<"No answer"<<endl;
//             break;
//         }
//         if (((total%b == y) || (total%b == 0 && y == a)) && ((total%c == z) || (total%c == 0 && z == a))){
//             cout<<total<<endl;
//             break;
//         }
//     }
//     }

// }