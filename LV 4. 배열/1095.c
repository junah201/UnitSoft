#include <stdio.h>

int main(){
    int Arr[100][100] = {0,};

    int N;
    scanf("%d",&N);

    int Num=1;

    for(int y = 0;y<N;y++){
        for(int x=N-1;x>=0;x--){
            Arr[y][x] = Num++;
        }
    }

    for(int i=0;i<N;i++){
        for(int j =0;j<N;j++){
            printf("%d ",Arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
