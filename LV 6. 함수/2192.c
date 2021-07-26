//2192. [basic] 기초 함수 실습 문제 -16

#include <stdio.h>

void Perfect_number(int n){
	int sum=0;
	printf("perfect number?\n");
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n){
		printf("YES");
	}else{
		printf("NO");
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	Perfect_number(n);
	return 0;
}
