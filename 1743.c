#include <stdio.h>

int main(){
    int arr[100] = {0,};
    int N;
    scanf("%d",&N);
    int sum=0;
    int temp;
    for(int i=0;i<N;i++){
        scanf("%d",&temp);
        sum+=temp;
    }
    printf("%d\n%.2f",sum,sum*1.0/N);
    return 0;
}
