//1844. 이차원 배열에서 합 출력하기 Middle

#include <stdio.h>

long long int N,M,x1,y1,x2,y2;
long long int map[3001][3001]={0,};
long long int sum[3001][3001]={0,};

int main() {
    scanf("%lld %lld",&N,&M);
    for(long long int y=0;y<N;y++) {
        for(long long int x=0;x<N;x++) {
            scanf("%lld",&map[y][x]);
            sum[y+1][x+1] = map[y][x]+sum[y][x+1]+sum[y+1][x]-sum[y][x];
        }
    }
    for(long long int i=0;i<M;i++) {
        scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
        printf("%lld\n",sum[x2][y2]-sum[x1-1][y2]-sum[x2][y1-1]+sum[x1-1][y1-1]);
    }
    return 0;
}
