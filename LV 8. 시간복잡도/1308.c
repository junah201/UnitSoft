//1308. 일차원 배열에서 합이 가장 큰 구간 찾기

#include <stdio.h>

long long int N,max;
long long int input[100000];
long long int DP[100000];

//완전 탐색 풀이
/*
int main() {
    scanf(" %d",&n);
    for(int i=0;i<n;i++) {
        scanf(" %d",&input[i]);
    }
    for(int i=0;i<n;i++) {
        sum=0;
        for(int j=0;j<n-i;j++) {
            sum+=input[i+j];
            if(sum>max) {
                max=sum;
            }else if(sum<=0) {
                break;
            }
        }
    }
    printf("%d",max);
    return 0;
}
*/

//일차원 배열 누적합 풀이
/*
int main() {
    scanf(" %d",&n);
    for(int i=0;i<n;i++) {
        scanf(" %d",&input[i]);
    }
    sum_list[0]=input[0];
    sum_min=sum_list[0];
    max=sum_list[0];
    for(int i=1;i<n;i++) {
        sum_list[i]=input[i]+sum_list[i-1];
    }
    
    for(int i=0;i<n;i++) {
        printf("%d ",sum_list[i]);
    }
    
    for(int i=0;i<n;i++) {
        if(sum_list[i]>=sum_min) continue;
        sum_min=sum_list[i];
        for(int j=i+1;j<n;j++) {
            //printf("%d %d = %d\n",sum_list[i],sum_list[j],sum_list[j]-sum_list[i]);
            if(sum_list[j]-sum_list[i]>max) max=sum_list[j]-sum_list[i];
        }
    }
    printf("%d",max);
    return 0;
}
*/

//DP 풀이
int main() {
    scanf(" %lld", &N);
    for(int i=0;i<N;i++) {
        scanf(" %lld", &input[i]);
    }
    DP[0]=input[0];
    max=DP[0];
    for(int i=1;i<N;i++) {
        if(DP[i-1]+input[i]>input[i]) DP[i]=DP[i-1]+input[i];
        else DP[i]=input[i];
        if(DP[i]>max) max=DP[i];
    }

    printf("%lld", max);
    return 0;
}
