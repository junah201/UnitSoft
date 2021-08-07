//1084. 홀수 마방진/magic

#include <stdio.h>

int Arr[10][10] = {0,};

int main(){
    int N;
    scanf("%d",&N);
    int num=0;
    int x=N/2;
    int y=0;
    for(int i=0;i<N*N;i++){
        Arr[y--][x++] = ++num;
        if(num%N==0){
            y++;
            x--;
            y++;
        }
        if(y<0){
            y=N-1;
        }
        if(x==N){
            x=0;
        }
        if(y==N){
            y=0;
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%3d",Arr[i][j]);
        }
        printf("\n");
    }
}
