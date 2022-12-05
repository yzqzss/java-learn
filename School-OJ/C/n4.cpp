/*
  歌手大奖赛上6名评委给一位参赛者打分，6个人打分的平均分为9.6分；如果去掉一个最高分，这名
  参赛者的平均分为9.4分；如果去掉一个最低分，这名参赛者的平均分为9.8分；如果去掉一个最高分
  和一个最低分，这名参赛者的平均是多少？
 */

#include <stdio.h>

int main(){
    int SUM = 6*96;
    int noMaxSum = 5*94;
    int noMinSum = 5*98;
    double evlRaw = (SUM-(SUM-noMaxSum)-(SUM-noMinSum));double evl = evlRaw/4/10;

    printf("%.2f", evl);
}
