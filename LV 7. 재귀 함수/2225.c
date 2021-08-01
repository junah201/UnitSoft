//2225. [basic] 재귀함수 연습문제 7

#include <stdio.h>

int arr[26][26] = {0,};
int get(int p,int q){
	if(q==1){
		return arr[q][p] = 1;
	}
	if(q>p){
		return arr[q][p]=0;
	}
	return get(p-1,q-1) + get(p-1,q);
}

int main(){
	int N,K;
	scanf("%d %d",&N,&K);
	printf("%d",get(N,K));
	
	return 0;
}
