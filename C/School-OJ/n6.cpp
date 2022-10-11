#include <stdio.h>

#define True 1//试试网上的一种伪布尔值的方法
#define False 0

int total=24,a,b,c,l[3],location,length=3;

int flag(int offset){//reused code from N05
	int realLocation = (location + offset)%length;
	if (realLocation < 0){
		realLocation+=3;//求正余数,C 没有负数索引值重定向
	}
	
	return realLocation;
}

int splitMoney(){
	for (location=0;location<=2;location++){
		l[flag(-1)] *= 2;
		l[flag(+1)] *= 2;
		l[flag(0)] = total-l[flag(+1)]-l[flag(-1)];
		
		//		printf("-- %d %d %d --\n", l[0],l[1],l[2]);
	}
	if ((l[0]==l[1]) && (l[1]==l[2])) {//难道说 C 不能用多个 == 直接判断?
		return True;
	}else{
		return False;
	}
}


int main(){
	for (a=12;a<=24;a++){
		for (b=0;b<=total-a;b++){
			c=total-a-b;
			//			printf("%d %d %d\n", a,b,c);
			l[0]=a;l[1]=b;l[2]=c;
			
			if (splitMoney() == True){
				printf("%d %d %d", a,b,c);
			}else{
			}
		}
	}
}

//13 7 4
