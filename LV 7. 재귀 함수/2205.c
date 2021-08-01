//2205. [basic] 재귀함수 실습문제 21

#include <stdio.h>

int count(long long int sum,long long int n){
    if(n<10){
        sum+=n;
        return sum;
    }
    sum+=n-n/10*10;
    count(sum,(n-(n-n/10*10))/10);
}

int main(){
    long long int N;
    scanf("%lld",&N);
    printf("%lld",count(0,N));
    return 0;
}
