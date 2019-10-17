#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void) {
float x,y,z,a,c,d,s;
printf("print x,y,z\n");
scanf("%f %f %f",&x,&y,&z);
a=cbrt(x)+pow(x,y+2);
c=sqrt(10*a);
d=pow(asin(z),2)-fabs(x-y);
s=c*d;
printf("res=%f", s);
	return 0;
}
