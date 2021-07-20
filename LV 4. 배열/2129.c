//2129. [basic] 이차원배열 연습문제-14

#include <stdio.h>

int main(){
    int arr[100][100]={0,};

    int N;
    scanf("%d",&N);
    int num=1;
    int y=0;
    int add=1;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            arr[y][i]=num++;
            y+=add;
        }
        y-=add;
        add*=-1;
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
