#include <stdio.h>

int main(){
    int arr[100][100]={0,};

    int N,M;
    scanf("%d %d",&N,&M);
    int num=1;
    for(int i=M-1;i>=0;i--){
        for(int j=N-1;j>=0;j--){
            arr[j][i]=num++;
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
