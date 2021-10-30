//1137. 구간합 구하기 (Prefix Sum)

#include <stdio.h>

int N,M,a,b;
long long int input[2000000];
long long int sum[2000000];

int main() {
    //N,M 입력
    scanf("%d %d",&N,&M);
    
    //합 계산
    sum[0]=0;
    for(int i=0;i<N;i++) {
        scanf("%lld", &input[i]);
        sum[i+1]=input[i]+sum[i];
    }
    for(int i=0;i<M;i++) {
        scanf("%d %d",&a,&b);
        printf("%lld\n",sum[b]-sum[a-1]);
    }
    return 0;
}
