// 定义一个结构体类型（包括年、月、日），要求输入年、月、日，然后输出该天是当年的第几天。

#include <iostream>
using namespace std;

struct Date
{
    int year;
    int month;
    int day;
};

int is_leapyear(int y){
    bool is_leapyear = ( ( (y % 4) == 0) and ((y % 100) != 0)) or ((y % 400) == 0);
    // is_leapyear = (y % 4 == 0)
    return is_leapyear;
}

int days_of_data(Date date){
    int days = 0;
    int month_days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    for (int i = 0; i < date.month - 1; i++){
        days += month_days[i];
    }
    days += date.day;
    if (is_leapyear(date.year) and date.month > 2){
        days += 1;
    }
    return days;
}

int main(){
    Date date;
    cout << "年：";
    cin >> date.year;
    cout << "月：";
    cin >> date.month;
    cout << "日：";
    cin >> date.day;
    cout << "这是这一年的第" << days_of_data(date) << "天" << endl;
}