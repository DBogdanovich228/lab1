#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {float s,x,y,z,a,b,c;
printf("print x,y,z\n");
scanf("%f",&x);
scanf("%f",&y);
scanf("%f",&z);
a=10*(cbrt(x)+pow(x,y+2));   //10 умножили на скобку. В скобке извлекли корень кубический из "x" и прибавили "x" в степени "y+2" 
c=sqrt(a);                   //извлекли корень квадратный из "a"
b=pow(asin(z),2)-fabs(x-y);  //возвели в квадрат arcsin(z) и отняли модуль "x-y"
s=c*b;                       //умножили c на b
printf("%f",s);
	return 0;
}
