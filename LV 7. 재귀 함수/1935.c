//1935. 삼각형 만들기 6

#include <stdio.h>

int N;
int num=0;
int get(int x){
    if(num<0){
		return 0;
	}
	if(num==0){
		printf("\n");
		num = x-1;
		get(x-1);
	}
    if(num>=0){
        printf("%4d",num--);
        get(x);
    }

	return 0;
}

int main(){
    scanf("%d",&N);
    num = N;
    get(N);
    return 0;
}
