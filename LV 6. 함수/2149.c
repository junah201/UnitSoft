//2149. [basic] 기초 함수 실습 문제 -12

#include <stdio.h>

void sum(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	printf("sum=%d",sum);
}

int main()
{
	int n;
	scanf("%d",&n);
	sum(n);
	return 0;
}
