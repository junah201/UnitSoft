#include <stdio.h>

int main(){
    int arr[100][100]={0,};

    int N,M;
    scanf("%d %d",&N,&M);
    int num=1;
    for(int i=N-1;i>=0;i--){
        for(int j=M-1;j>=0;j--){
            arr[i][j]=num++;
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
