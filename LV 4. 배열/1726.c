#include <stdio.h>

int main(){
    int arr[100];
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int sum=1;
    for(int i=0;i<N;i++){
        sum*=arr[i];
    }
    printf("%d",sum);
    return 0;
}
