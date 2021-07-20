#include <stdio.h>

int main(){
    int arr[100] = {0,};
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<N;i++){
        if(arr[i]>=10 && arr[i]<=19){
            count +=1;
        }
    }
    printf("%d",count);
    return 0;
}
