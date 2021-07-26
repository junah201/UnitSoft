//2150. [basic] 기초 함수 실습 문제 -13

#include <stdio.h>

void fac(int n){
	long long fac=1;
	for(int i=1;i<=n;i++){
		fac*=i;
	}
	printf("%d!=%lld",n,fac);
}

int main()
{
	int n;
	scanf("%d",&n);
	fac(n);
	return 0;
}
