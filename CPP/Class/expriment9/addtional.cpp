// 给定一系列正整数，请按要求对数字进行分类，并输出以下5个数：
//     1) A1=能被5整除的数字中所有偶数的和；
//     2) A2=将被5除后余1的数字按给出顺序进行交错求和，即计算n1−n2+n3−n4⋯；
//     3) A3=被5除后余2的数字的个数；
//     4) A4=被5除后余3的数字的平均数，精确到小数点后1位；
//     5) A5=被5除后余4的数字中最大数字。
// 
// 若其中某一类数字不存在，则在相应位置输出 N 。


#include <iostream>
#include <assert.h>
using namespace std;
const string N = "N";

bool is_5_div(int n, int mod){
    assert(mod >= 0 && mod < 5);
    return n % 5 == mod;
}

long long int A1(int *arr, size_t len){
    assert(arr != NULL && len > 0);
    long long int sum = 0;
    for(size_t i=0; i < len; i++){
        if(is_5_div(arr[i], 0) && arr[i] % 2 == 0){
            sum += arr[i];
        }
    }

    if (sum == 0){
        throw N;
    }

    return sum;
}

long long int A2(int *arr, size_t len){
    assert(arr != NULL && len > 0);
    long long int sum = 0;
    bool found = false;
    for(size_t i=0; i < len; i++){
        if(is_5_div(arr[i], 1)){
            if (!found){
                found = true;
            }
            if(i % 2 == 0){
                sum += arr[i];
            }else{
                sum -= arr[i];
            }
        }
    }

    if (!found){
        throw N;
    }

    return sum;
}

size_t A3(int *arr, size_t len){
    assert(arr != NULL && len > 0);
    size_t count = 0;
    for(size_t i=0; i < len; i++){
        if(is_5_div(arr[i], 2)){
            count++;
        }
    }

    if (count == 0){
        throw N;
    }

    return count;
}

double A4(int *arr, size_t len){
    assert(arr != NULL && len > 0);
    long long int sum = 0;
    size_t count = 0;
    for(size_t i=0; i < len; i++){
        if(is_5_div(arr[i], 3)){
            sum += arr[i];
            count++;
        }
    }

    if (count == 0){
        throw N;
    }
    return sum / (double)count;
}

int A5(int *arr, size_t len){
    assert(arr != NULL && len > 0);
    int max = 0;
    bool found = false;
    for(size_t i=0; i < len; i++){
        if(is_5_div(arr[i], 4)){
            if (!found){
                found = true;
                max = arr[i];
            } else if (arr[i] > max){
                max = arr[i];
            }
        }
    }

    if (!found){
        throw N;
    }

    return max;
}

// func_p A1, A2, A3, A4, A5
// use template to reduce code
typedef long long int (*func_p)(int *, size_t);



int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i=0; i < n; i++){
        cin >> arr[i];
        assert(arr[i] > 0);
    };
    
    func_p funcs[5] = {A1, A2, A3, A4, A5};
}