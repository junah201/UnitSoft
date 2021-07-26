//2191. [basic] 기초 함수 실습 문제 -15

#include <stdio.h>

void f(int n){
	int count =0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			count+=1;
		}
	}
	if(count==0){
		printf("prime");
	}else{
		printf("composite");
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	f(n);
	return 0;
}
