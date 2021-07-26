//2108. [basic] 기초 함수 실습 문제 -8

#include <stdio.h>

void star(){
	printf("*");
}

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		star();
	}
	return 0;
}
