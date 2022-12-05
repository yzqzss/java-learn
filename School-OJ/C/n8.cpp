/*小鲤鱼欢欢，要参加奥运会，决定加紧练习游泳，她每天从a小时b分
  钟开始游泳，到c小时d分钟结束，请您帮她计算一下，这一天总共游
  了多少小时多少分钟？
 */

#include <stdio.h>

int a,b,c,d;
int startTimeSec,endTimeSec,spendTimeSec;

int main(){
    scanf("%d %d %d %d", &a,&b,&c,&d);
    startTimeSec=a*3600+b*60;
    endTimeSec=c*3600+d*60;
    spendTimeSec=endTimeSec-startTimeSec;
    spendTimeSec<0 ? spendTimeSec=3600*24+spendTimeSec : NULL;// 尝试使用 `?` `:` 来替代 `if` `else`，压缩条件语句的行数。（来源：<https://www.bilibili.com/read/cv10771145>）
    printf("%d %d", (spendTimeSec/3600),((spendTimeSec/60)%60));
}

