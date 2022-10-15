#include <stdio.h>
#include <math.h>

main(){
	int count1 = 0;//质数个数
//	int count2 = 0;//循环次数
	for(int i=2;i<=1000;i++) {
		int flag = 0;//用作标记，如果是质数就为0，不是质数就为1
		//if(Math.sqrt(i)!=(int)Math.sqrt(i)){
		for (int j = 2; j <= sqrt(i); j++) {//j改为小于i的平方根
//			count2++;
			if (i % j == 0) {
				flag = 1;//不是质数，改为1
				break;//既然已经知道这个数不是质数，那么就可以结束对这个数字的判断
			}
		}
		//}else {
		//    count2++;
		//}
		if (flag == 0) {
			count1++;
		}
	}
	printf("%d",count1);
//	System.out.println(count2);
}
//1.059
