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
    printf("%d ",arr[N-1]);
    return 0;
}
