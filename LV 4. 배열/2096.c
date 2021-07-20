#include <stdio.h>

int main(){
    int arr[40]={0,};
    arr[0] = 1;
    arr[1] = 1;
    int N;
    scanf("%d",&N);
    for(int i=2;i<N;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
