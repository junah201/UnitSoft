//2230. [basic] 재귀함수 연습문제 11 (stair)

#include <stdio.h>

int get(int n){
	if(n==1){
		return 1;
	}else if(n==2){
		return 2;
	}else if(n==3){
		return 4;
	}
	return get(n-3) + get(n-2) + get(n-1);
}

int main(){
	int N;
	scanf("%d",&N);
	printf("%d",get(N));
	return 0;
}
