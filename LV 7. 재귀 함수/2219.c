//2219. [basic] 재귀함수 연습문제 1

#include <stdio.h>

int get(int n,int m){
	if(m==0){
		return n;
	}
	get(m,n%m);
}

int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	if(N>M){
		printf("%d",get(N,M));
	}else{
		printf("%d",get(M,N));
	}
	return 0;
}
