//2226. [basic] 재귀함수 연습문제 8

#include <stdio.h>

int arr[26][26] = {0,};
int N;
int get(int x,int y){
	if(y-1==N){
		return 0;
	}
	if(x==1){
		arr[y][x] = 1;
		printf("%d ", arr[y][x]);
	}else{
		arr[y][x] = arr[y-1][x] + arr[y-1][x-1];
		printf("%d ", arr[y][x]);
	}
	if(x==y){
		printf("\n");
		get(1,y+1);
	}else{
		x+=1;
		get(x,y);
	}
}

int main(){
	
	scanf("%d",&N);
	get(1,1);
	return 0;
}
