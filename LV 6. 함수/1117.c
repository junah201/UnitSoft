//1117. 셀프 넘버 (넥슨 입사시험 )

#include <stdio.h>

int arr[5000] = {0,};

int main(){
    int N,M;
    scanf("%d %d",&N,&M);

    int temp;
	for(int i=1;i<=M;i++){
        int sum = 0;
		temp=i;
		while(temp){
			sum+=temp%10;
			if(temp<10){
				break;
			}
			temp = temp/10;
		}
		arr[sum+i] += 1;
		sum=0;
	}

	int num_sum = 0;
	for(int i=N;i<=M;i++){
        if(arr[i]==0){
            num_sum+=i;
        }
	}
	printf("%d",num_sum);
}
