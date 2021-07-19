#include <stdio.h>

int main(){
    int arr[1000]={0,};
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i=N-1;i>=0;i--){
        for(int j=i;j>i-N;j--){
            if(j<0){
                printf("%d ",arr[j+N]);
            }else{
                printf("%d ",arr[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
