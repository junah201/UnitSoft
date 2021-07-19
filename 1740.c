#include <stdio.h>

int main(){
    int arr[100] = {0,};
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int x,y;
    scanf("%d %d",&x,&y);
    int count=0;
    for(int i=0;i<N;i++){
        if(arr[i]>=x && arr[i]<=y){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}
