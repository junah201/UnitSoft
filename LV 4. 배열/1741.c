#include <stdio.h>

int main(){
    int arr[100] = {0,};
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=N-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
