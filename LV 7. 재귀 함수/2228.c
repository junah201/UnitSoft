//2228. [basic] 재귀함수 연습문제 9 (euclid)

#include <stdio.h>
int N,M;

int getmin(int n,int m){
	if(m==0){
		return n;
	}
	getmin(m,n%m);
}

int getmax(int x){
	if(x%N==0 && x%M==0){
		return x;
	}
	getmax(x+1);
}

int main(){
	scanf("%d %d",&N,&M);
	if(N>M){
		printf("%d %d",getmin(N,M),getmax(N));
	}else{
		printf("%d %d",getmin(M,N),getmax(M));
	}
	return 0;
}
