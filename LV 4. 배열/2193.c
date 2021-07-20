//2193. [basic] 이차원배열 연습문제-28

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

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(Arr[j][i]==0){
                printf("   ");
            }else{
                printf("%3d",Arr[j][i]);
            }
        }
        printf("\n");
    }

    return 0;
}
