#include <stdio.h>

int main(){
    int arr[100];
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int max=0,min=0;
    for(int i=1;i<N;i++){
        if(arr[i]>arr[max]){
            max=i;
        }else if(arr[i]<arr[min]){
            min=i;
        }
    }

    printf("[%d]-%d\n",max,arr[max]);
    printf("[%d]-%d",min,arr[min]);
    return 0;
}
