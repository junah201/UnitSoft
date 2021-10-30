//1138. 이차원 배열에서 합 출력하기 small

#include <stdio.h>

int N,M,x1,x2,y1,y2;
int arr[50][50];

//get_sum 이차원배열
int get_sum(int x1,int y1,int x2,int y2)
{
    int result=0;
    for(int i=x1-1;i<=x2-1;i++)
    {
        for(int j=y1-1;j<=y2-1;j++)
        {
            result += arr[i][j];
        }
    }
    return result;
}

//이차원 배열에서 합 출력하기 small
int main() {
    scanf("%d %d",&N,&M);
    //arr 입력
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<M;i++) {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        printf("%d\n",get_sum(x1,y1,x2,y2));
    }
    return 0;
}
