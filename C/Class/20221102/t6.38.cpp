#include <stdio.h>
#include <math.h>


#define True 1
#define False 0

int n,x;
int _x;
int numList[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};// len(numList[])  =  15

int isPrime(int x){//这部分代码写成单独的函数，直接 return 就能结束执行，避免放 main() 里会产生多层 break 和多余的判断混乱。

//    if 2<x<n
//    感觉这样子遍历有点慢……

    if (x<=47){
        for (int location=0; location<=14; location++){ //# 过一遍 被除数 小数字的碰撞筛查:    
            if (x  ==  numList[location]){return True ;}   //## 先看是否与 numList[] 相等（T）
        }
    }

    
    for (int location=0; location<=14; location++){     //# 过一遍 除数 小数字的碰撞筛查:    
        if (x%numList[location] == 0){return False;}       //## 再看能否被 numList[] 整除（F）
    }
    
                                                           //# 碰撞不了，就只能遍历了：
//    int numTestRange_END   = x/2    ;                      //## 确定遍历终止点，n除以2 之后是没价值的除数。Update: 这种算法太慢，废弃。
    int numTestRange_END   = sqrt(x);                      //## 查了 [素数 - 维基百科](https://zh.wikipedia.org/zh-cn/质数#試除法) ，发现开根能减少遍历范围。
    int numTestRange_START = 53     ;                      //## 确定遍历开始点，[0,52] 的除数在碰撞筛查时已经检查过了，所以从 53 开始。
    
    for (int numTest=numTestRange_START; numTest<=numTestRange_END; numTest+=2){// numTest+=2 以便跳过偶数。减少一般的计算量。 ref:[试除法 - 维基百科] // 跳过偶数！我怎么没想到呢。
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

