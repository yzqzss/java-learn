#include <stdio.h>

int main(){
    double x,y;scanf("%lf %lf",&x,&y);//输入 x,y
    int ctl;
    if      (x>=0 && y>=0) ctl=1;
    else if (x>0  && y<=0) ctl=2;
    else if (x<0) ctl=3;
    else {printf("Error");return 1;}

    double z;
    switch (ctl){
        case 1 : z = ((x*x+1)*y)/(x*x+2);break;
        case 2 : z = (x-2)/(y*y+1);break;
        case 3 : z = x+y;break;
        default: {printf("Error");return 1;}
    }

    printf("%.2f",z);
}
