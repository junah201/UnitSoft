//1929. 1로 만들기(Easy)

#include <stdio.h>

int sum = 0;

int get(int i){
	if(i==1){
		return sum;
	}
    if(i%3==0){
		sum+=1;
		get(i/3);
    }else if((i-1)%3==0){
    	sum+=1;
		get(i-1);
    }else if(i%2==0){
		sum+=1;
		get(i/2);
    }else{
		sum+=1;
		get(i-1);
    }
}

int main(){
    int N;
    scanf("%d",&N);
    printf("%d",get(N));
    return 0;
}
