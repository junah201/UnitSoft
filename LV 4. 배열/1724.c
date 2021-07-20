#include <stdio.h>

int main(){
    int arr[100];
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<N;i++){
        if(arr[i]%5==0){
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}
