/*2km内6CNY，超出2km后1.8CNY/km
 超过10km，1.8CNY/km+50%的费率
 时间不到3不收费，每3分钟2元*/

#include "stdio.h"


//int feeL(){
//	l<=2 ? return(60) : NULL;
//}


int main(){
	int l,t;
	int feeL,feeT;
	scanf("%d %d", &l,&t);
	
	// L fee
	l<=2         ? feeL=60                    : NULL;
	2<l && l<=10 ? feeL=60+(l-2)*18           : NULL;
	10<l         ? feeL=60+(l-2)*18+(l-10)*9  : NULL;
	
	// T fee
	t<3          ? feeT=0                     : NULL;
	3<=t         ? feeT=(t/3)*10              : NULL;
	
	int sumFee;
	sumFee=feeL+feeT;
	
	if (sumFee%10 == 0) {//整数判断
		printf("%d", (sumFee/10));
	}else{
		double FloatedSumFee=(double)sumFee/10;
		printf("%.1f", FloatedSumFee);
	}
}
