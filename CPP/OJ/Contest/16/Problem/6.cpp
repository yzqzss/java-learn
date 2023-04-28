// 编程计算：六位数20□□08能被99整除，□□是多少？

#include <iostream>
// #include <string>

int main(){
    int start = 200008, end = 209908;
    for (;start<=end;start+=100){
        // std::cout<<start<<"\t"<<!((start%99))<<std::endl;
        if (!(start%99)){ // trick: 0 ==> true
            // std::cout<<start<<std::endl;
            // if ((start/100)%100 <= 10) {
            //     continue;
            // }
            std::cout<<start/100%100;
            // std::string text = std::to_string(start);
            // std::cout<<text.substr(2,2);
        }
    }
}