#include <stdio.h>

#define True 1
#define False 0

int n;

int isPrime(){
//	if 2<n<
//	int numList[] = {2,3,5,7,11,13,14,17,19,23,27,29,31,37,41,43,47}
	int stopFlag = False;

	int numList[] = {2,3,5,7,11,13,14,17,19,23,27,29,31,37,41,43,47};
	for (int location=0; location<=11; location++){//过一遍碰撞筛查
		if(n==numList[location]){return True; break; stopFlag=True;}else{NULL;}//与筛查数相同则为质数，直接
		if(n%numList[location] == 0){return False;}else{NULL;}
	}
	
	if(stopFlag=False){
		
	}else{
		return False;
	}
//return(True);
}

int main(){
	scanf("%d",&n);
	
}
