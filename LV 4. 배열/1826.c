#include <stdio.h>

int main(){
    float arr[100];
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%f",&arr[i]);
    }
    int max=0,min=0;
    for(int i=1;i<N;i++){
        if(arr[i]>arr[max]){
            max=i;
        }else if(arr[i]<arr[min]){
            min=i;
        }
    }
    printf("%.1fkg",arr[max]-arr[min]);
    return 0;
}
