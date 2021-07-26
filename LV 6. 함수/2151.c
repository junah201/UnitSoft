//2151. [basic] 기초 함수 실습 문제 -14

#include <stdio.h>

void alp(char n){
	for(int i=n;i<=122;i++){
		printf("%c\n",i);
	}
}

int main()
{
	char n;
	scanf("%c",&n);
	alp(n);
	return 0;
}
