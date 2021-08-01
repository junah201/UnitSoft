//2203. [basic] 재귀함수 실습문제 19

#include <stdio.h>

int sum = 0;

int get(int n){
	sum=sum*10;
	sum+=n-n/10*10;
	if(n<10){
		return sum;
	}
	get(n/10);
}

int main(){
	int N;
	scanf("%d",&N);
	printf("%d",get(N));
	return 0;
}
