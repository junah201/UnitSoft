//1931. 삼각형 만들기 2

#include <stdio.h>

int N;
int t=0;
int get(int x=1){
	if(x==N && t==N){
		return 0;
	}else if(t++==N){
		printf("\n");
		t=0;
		get(x+1);
	}else if(N-t<x){
		printf("*");
		get(x);
	}else{
		printf(" ");
		get(x);
	}
	return 0;
}

int main(){
    scanf("%d",&N);
    get();
    return 0;
}
