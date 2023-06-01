#include <iostream>
#include <assert.h>
using namespace std;

class Time{
    private:
        int hour;
        int minute;
        int second;
    public:
        Time();

        void show(){
            cout << hour << ":" << minute << ":" << second << endl;
        }

        void set(int h,int m, int s){
            hour = h;
            minute = m;
            second = s;
            time_check();
        }
    protected:
        void time_check(){
            assert(hour >= 0 and hour < 24);
            assert(minute >= 0 and minute < 60);
            assert(second >= 0 and second <= 60); // 润秒
        }
};

Time::Time(){
    hour = 0;
    minute = 0;
    second = 0;
}

int main(){
    Time t;
    t.show();
    t.set(12,54,59);
    t.show();

    delete &t;
}