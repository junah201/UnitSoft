//1256. 이차원 배열에서 합이 가장 큰 영역 찾기

#include <stdio.h>

long long int N,max=-1001;
long long int map[501][501];
long long int DP[501];
long long int sum[501][501]={0,};

//누적합 변형 풀이
int main() {
    //입력 및 가로 누적합 계산
    scanf("%lld",&N);
    for(int y=1;y<=N;y++) {
        for(int x=1;x<=N;x++) {
            scanf("%lld",&map[y][x]);
            sum[y][x]=sum[y][x-1]+map[y][x];
        }
    }
    //DP | a1:끝점, a2:시작점
    for(int a1=1;a1<=N;a1++){
        for(int a2=1;a2<=a1;a2++){
            for(int i=0;i<=N;i++) {
                DP[i]=0;
            }
            for(int i=1;i<=N;i++) {
                DP[i]=DP[i-1]+sum[i][a1]-sum[i][a2-1];
                if(DP[i]>max) {
                    max=DP[i];
                }
                if(DP[i]<0) DP[i]=0;
            }
        }
    }
    printf("%lld",max);
    return 0;
}

//전체 누적합 풀이 N^4
/*
int main() {
    scanf("%lld",&N);
    for(long long int y=0;y<N;y++) {
        for(long long int x=0;x<N;x++) {
            scanf("%lld",&map[y][x]);
            sum[y+1][x+1] = map[y][x]+sum[y][x+1]+sum[y+1][x]-sum[y][x];
        }
    }
    //print sum
    for(long long int y=1;y<=N;y++) {
        for(long long int x=1;x<=N;x++) {
            printf("%lld ",sum[y][x]);
        }
        printf("\n");
    }

    for(int y=0;y<N;y++) {
        for(int x=0;x<N;x++) {
            if(sum[y][x]>max) max=sum[y][x];
            else {
                for(int ty=0;ty<y;ty++) {
                    for(int tx=0;tx<x;tx++) {
                        if(sum[y][x]-sum[y][tx]-sum[ty][x]+sum[ty][tx]>max) max=sum[y][x]-sum[y][tx]-sum[ty][x];
                    }
                }
            }
        }
    }
    printf("%lld\n",max);
    return 0;
}
*/
//2차원 DP 풀이 X
/*
int main() {
    scanf("%lld", &N);
    for(int i=1;i<N;i++) {
        for(int j=0;j<N-i;j++) {
            scanf("%d",&input[i][j]);
        }
    }
    DP[1][1]=input[1][1];
    max=DP[1][1];
    for(int x=1;x<=N;x++) {
        for(int y=1;y<=N;y++) {
            if(DP[x-1][y]+DP[x][y-1]+input[x][y]-DP[x-1][y-1]>input[x][y]) DP[x][y]=DP[x-1][y]+DP[x][y-1]+input[x][y]-DP[x-1][y-1];
            else DP[x][y]=input[x][y];
            if(DP[x][y]>max) max=DP[x][y];
        }
    }
    printf("%d",max);
    return 0;
}
*/
