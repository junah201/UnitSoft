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
    printf("%d [%d]\n",arr[max],max+1);
    printf("%d [%d]\n",arr[min],min+1);
    return 0;
}
