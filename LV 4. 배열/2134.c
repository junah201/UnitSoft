//2134. [basic] 이차원배열 연습문제-18

#include <stdio.h>

int main(){
    int arr[100][100]={0,};

    int N,M;
    scanf("%d %d",&N,&M);
    int num=1;
    int y=0;
    int add=1;
    for(int i=M-1;i>=0;i--){
        for(int j=N-1;j>=0;j--){
            arr[y][i]=num++;
            y+=add;
        }
        y-=add;
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
