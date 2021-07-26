//2104. [basic] 기초 함수 실습 문제 -4

#include <stdio.h>
#include <math.h>

int main()
{
	float a,b;
	scanf("%f %f",&a,&b);
	float temp = pow(a,b);
	printf("%.1f\n",temp);
	temp = pow(b,a);
	printf("%.1f\n",temp);
	return 0;
}
