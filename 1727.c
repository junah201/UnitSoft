#include <stdio.h>

int main(){
    int arr[100];
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<N;i++){
        if(arr[i]%2==1){
            printf("%d ",arr[i]);
            sum+=arr[i];
        }
    }
    printf("\n%d",sum);
    return 0;
}
