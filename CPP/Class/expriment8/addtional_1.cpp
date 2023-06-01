// T0008 Wright Down the Number
// Given a non-negative integer N, your task is to compute the sum of all the digits of N, and output every digit of the sum in English.

// Input Specification:
// Each input file contains one test case. Each case occupies one line which contains an N(≤10^100).
// Output Specification:
// For each test case, output in one line the digits of the sum in English words. There must be one space between two consecutive words, but no extra space at the end of a line.
// Sample Input:
// 1234567890987654321123456789
// Sample Output:
// one three five

#include <iostream>
#include <assert.h>
#include <string>
using namespace std;

int digit_translator(int digit, bool verbose=false){
// accept a digit and output the digit in English
// digit: 0-9 or 48-59(ASCII)
// return: 0-9 or -1(error)
    if (0 <= digit && digit <= 9){
        if (!verbose){
            return digit;
        }
        switch(digit){
            case 0:
                cout << "zero";
                break;
            case 1:
                cout << "one";
                break;
            case 2:
                cout << "two";
                break;
            case 3:
                cout << "three";
                break;
            case 4:
                cout << "four";
                break;
            case 5:
                cout << "five";
                break;
            case 6:
                cout << "six";
                break;
            case 7:
                cout << "seven";
                break;
            case 8:
                cout << "eight";
                break;
            case 9:
                cout << "nine";
                break;
        }
    }else if(48<=digit && digit<=59){
        digit_translator(digit-48);
    }else{
        assert(0);
        // return -1;
    }
}
inline int cnt(long long int x){
    int r = 0;
    while (x!=0){
        r++;
        x/=10;
    }
    return r;
}


int main(){
    // char *input_N = new char[100];
    string input_N;
    cin >> input_N;
    long long int sum = 0;
    while 
    char *sum_chars = new char[cnt(sum)];

}