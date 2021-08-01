//1934. 삼각형 만들기 5

#include <stdio.h>

int N;
int t=0;
int num=0;
int get(int x=1){
	if(x==N && t==N){
		return 0;
	}else if(t++==N){
		printf("\n");
		t=0;
		num=0;
		get(x+1);
	}else if(N-t<x){
		printf("%4d",++num);
		get(x);
	}else{
		printf("    ");
		get(x);
	}
	return 0;
}

int main(){
    scanf("%d",&N);
    get();
    return 0;
}
