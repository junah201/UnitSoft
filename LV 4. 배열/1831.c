#include <stdio.h>

int main(){
    int arr[100]={0,};
    int N;
    scanf("%d",&N);
    int temp;
    for(int i=0;i<N;i++){
        scanf("%d",&temp);
        arr[temp-1]+=1;
    }
    for(int i=0;i<15;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
