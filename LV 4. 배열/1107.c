#include <stdio.h>

int main(){
    int Arr[100][100] = {0,};

    int N,M;
    scanf("%d %d",&N,&M);

    int Num=1;
    int add=1;
    int temp=0;
    for(int x=N-1;x>=0;x--){
        for(int y=0;y<M;y++){
            Arr[x][temp] = Num++;
            temp+=add;
        }
        add*=-1;
        temp+=add;
    }

    for(int i=0;i<N;i++){
        for(int j =0;j<M;j++){
            printf("%d ",Arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
