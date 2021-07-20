#include <stdio.h>

int main(){
    int arr[100];
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<N;i++){
        if(arr[i]%2==0){
            sum+=1;
        }
    }
    printf("%d",sum);
    return 0;
}
