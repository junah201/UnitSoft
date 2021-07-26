//2198. [basic] 기초 함수 실습 문제 -18

#include <stdio.h>

int add(int a,int b){
	int z=a+b;
	return z;
}

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	printf("%d + %d = %d",n,m,add(n,m));
	return 0;
}
