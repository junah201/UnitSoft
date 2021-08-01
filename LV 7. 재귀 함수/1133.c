//1133. 피보나치

#include <stdio.h>

int N;
int arr[21] = {0,};

int get(int x=1){
	if(x==1){
		arr[x] = 0;
		printf("0 ");
	}else if(x==2){
		arr[x] = 1;
		printf("1 ");
	}
	else{
		arr[x] = arr[x-1] + arr[x-2];
		printf("%d ",arr[x]);
	}
	if(x==N){
		return 0;
	}
	get(++x);
}

int main(){
	
	scanf("%d",&N);
	get();
	return 0;
}
