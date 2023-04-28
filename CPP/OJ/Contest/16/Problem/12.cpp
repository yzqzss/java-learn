// Description
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
    int min_score = (TARGET_SCORE - score_got) - (MAX_SHOOTS - shoot) * MAX_SINGLE_RING_SCORE ; // 下一枪需要达到的最小分数
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