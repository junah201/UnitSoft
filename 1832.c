#include <stdio.h>

int main(){
    int arr[100]={0,};
    int N,x,y;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&x,&y);
    int sum=0;
    for(int i=x-1;i<y;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}
