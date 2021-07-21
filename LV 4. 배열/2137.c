//2137. [basic] 이차원배열 연습문제-21

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int arr[100][100] = {0,};
    int N;
    scanf("%d",&N);

    int x,y;
    int num=1;
    for(int i=0;i<=N;i++){
        x=0 ;
        y=N-i;
        for(int j=0;j<i;j++){
            arr[y++][x++] = num++;
        }
    }

    for(int i=0;i<N;i++){
        x=i+1;
        y=0;
        for(int j=0;j<N-i-1;j++){
            arr[y++][x++] = num++;
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
