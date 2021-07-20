//2131. [basic] 이차원배열 연습문제-15

#include <stdio.h>

int main(){
    int arr[100][100]={0,};

    int N,M;
    scanf("%d %d",&N,&M);
    int num=1;
    int x=M-1;
    int add=-1;
    for(int i=N-1;i>=0;i--){
        for(int j=M-1;j>=0;j--){
            arr[i][x]=num++;
            x+=add;
        }
        x-=add;
        add*=-1;
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
