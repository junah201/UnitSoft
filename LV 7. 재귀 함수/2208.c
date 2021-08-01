//2208. [basic] 재귀함수 실습문제 22

#include <stdio.h>

int num = 0;
int sum = 0;
int get(int n){
	num=num*10;
	num+=n-n/10*10;
	sum+=n-n/10*10;
	if(n<10){
		return num;
	}
	get(n/10);
}

int main(){
	int N;
	scanf("%d",&N);
	printf("%d\n",get(N));
	printf("%d\n",sum);
	return 0;
}
