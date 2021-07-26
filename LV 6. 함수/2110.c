//2110. [basic] 기초 함수 실습 문제 -10

#include <stdio.h>

void prime(){
	printf("prime()\n");
	int count =0;
	int line=0;
	for(int i=2;i<=100;i++){
		for(int j=2;j<i;j++){
			if(i%j==0){
				count +=1;
			}
		}
		if(count==0){
			printf("%d ",i);
			line+=1;
		}
		if(line%10==0){
			printf("\n");
		}
		count =0;
	}
}

int main()
{
	prime();
	return 0;
}
