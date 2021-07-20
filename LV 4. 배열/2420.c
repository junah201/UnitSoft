//2420. [basic] 이차원배열 연습문제-29

#include <stdio.h>
#include <string.h>

int main()
{

    int Arr[20][20] = {0,};
    int N;

    scanf("%d",&N);
    int num=1;
    int x=0;

    for(int i=0;i<N/2;i++){
        int y=i;
        for(int j=0;j<N-2*i;j++){
            Arr[y++][x] = num++;
        }
        x++;
    }
    int y=N/2-1;
    x++;
    y--;
    Arr[N/2][N/2] = num++;
    for(int i=3;i<=N;i+=2){
        for(int j=1;j<=i;j++){
            Arr[y+j][x] = num++;
        }
        x++;
        y--;
    }
    //3 5 7 9
    //9 7 5 3

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(Arr[i][j]==0){
                printf("     ");
            }else{
                printf("%5d",Arr[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
