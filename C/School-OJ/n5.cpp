/*
  某幼儿园里，有5个小朋友编号为1，2，3，4，5，他们按自己的编号顺序围坐在一张圆桌旁。
  他们身上都有若干个糖果(键盘输入)，现在他们做一个分糖果游戏。从1号小朋友开始，将自
  己的糖果均分三份（如果有多余的糖果，则立即吃掉），自己留一份，其余两份分给他的相邻
  的两个小朋友。接着2号、3号、4号、5号小朋友同样这么做。问一轮后，每个小朋友手上分别
  有多少糖果。
 */


#include <stdio.h>
#include <math.h>

int location = 0;
int child [ 5 ];

int flag(int offset){
	int realLocation = (location + offset)%5;
	if (realLocation < 0){
		realLocation+=5;//正余数
	}
//	printf("(位置:%d)", realLocation);
	return realLocation;
}

int main(){
	for (; location < 5; location++){
		scanf("%d", &child[location]);
	}
	
	
	location = 0;
	int one;
	for (; location < 5; location++){
		one = child[location]/3;
//		printf("(一份:%d)", one);
		child[flag(0)]=one;
		child[flag(-1)]=child[flag(-1)]+one;
		child[flag(+1)]=child[flag(+1)]+one;
		
//		printf("\n%d %d %d %d %d\n", child[0],child[1],child[2],child[3],child[4]);
	}
	
	printf("%d %d %d %d %d", child[0],child[1],child[2],child[3],child[4]);
}



