#include <iostream>
#include <algorithm>
#include <vector>

bool is_divisible(int n, int d) {
    return n % d == 0;
}

int main() {
    std::vector<int> digits{1, 2, 3, 4, 5, 6, 7, 8, 9};
    // std::vector<int> nums;
    do {
        int num = digits[0] * 100000000 + digits[1] * 10000000 + digits[2] * 1000000
                + digits[3] * 100000 + digits[4] * 10000 + digits[5] * 1000
                + digits[6] * 100 + digits[7] * 10 + digits[8];
        if (is_divisible(num, 9) && is_divisible(num / 10, 8) && is_divisible(num / 100, 7)
            && is_divisible(num / 1000, 6) && is_divisible(num / 10000, 5) 
            && is_divisible(num / 100000, 4) && is_divisible(num / 1000000, 3)
            && is_divisible(num / 10000000, 2)) {
                std::cout << num << std::endl;
                return 0;
        }
    } while (std::next_permutation(digits.begin(), digits.end()));
}

/*

// Description
// 求一个9位数,该数的每一位均是1-9之间的数,
// 但是每位上的数字各不相同.最后使得这个9位数从高位开始,
// 前一位能被1整除,前两位能被2整除,前三位能被3整除,
// 前四位能被4整除……一直到整个9位数能被9整除。
// Input
// 无
// Output
// 一个九位数


#include <iostream>
using std::cin, std::cout, std::endl;

int main(){
    int num = 123456789;
    int tmp = 0;
    bool flag = false;
    while (num < 987654321){
        tmp = num;
        flag = false;

        // skip 5 not in the middle
        if ( (num/10000) % 5 != 0 ){
            num++;
            continue;
        }
        // skip zero
        while (tmp > 0){
            if (tmp%10 == 0){
                flag = true;
                break;
            }
            tmp /= 10;
        }
        if (flag == true){
            num++;
            continue;
        }


        tmp = num;
        int i = 1;
        while (tmp > 0){
            if (tmp%10%i != 0){
                flag = true;
                break;
            }
            tmp /= 10;
            i++;
        }
        if (flag == false){
            cout<<num;
            break;
        }
        num++;
    }
}
*/