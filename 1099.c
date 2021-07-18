#include <stdio.h>

int main(){
    int Arr[100][100] = {0,};

    int N,M;
    scanf("%d %d",&N,&M);

    int Num=1;

    for(int y=N-1;y>=0;y--){
        for(int x=0;x<M;x++){
            Arr[y][x] = Num++;
        }
    }

    for(int i=0;i<N;i++){
        for(int j =0;j<M;j++){
            printf("%d ",Arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
