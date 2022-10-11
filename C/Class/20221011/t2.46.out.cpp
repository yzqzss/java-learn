#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	double c_cos,c_sin;
	c_cos = ( (a*a)+(b*b)-(c*c) ) / (double)(2*a*b);
	c_sin = sqrt(1-(c_cos*c_cos));
	double S = b*a*c_sin/2;
	printf("%lf", S);
}
