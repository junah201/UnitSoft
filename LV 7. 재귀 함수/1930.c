//1930. 삼각형 만들기 1

#include <stdio.h>

int N;
int t=0;
int get(int x=1){
	if(t==N){
		return 0;
	}else if(t++==x){
		printf("\n");
		t=0;
		get(x+1);
	}else{
		printf("*");
		get(x);
		return 0;
	}	
}

int main(){
    scanf("%d",&N);
    get();
    return 0;
}
