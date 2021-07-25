//2102. [basic] 기초 함수 실습 문제 -2

#include <stdio.h>
#include <math.h>

int main()
{
	while(1){
		int a;
		scanf("%d",&a);
		if(a==0){
			break;
		}
		printf("%d\n",abs(a));
	}
	return 0;
}
