//2224. [basic] 재귀함수 연습문제 6

#include <stdio.h>

int get(int p,int q){
	if(q==1){
		return p;
	}else if(p==q){
		return 1;
	}else if(p<q){
		return 0;
	}
	return get(p-1,q-1) + get(p-1,q);
}

int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	printf("%d",get(N,M));
	

	return 0;
}
