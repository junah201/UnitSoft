//2164. [basic] 재귀함수 실습문제 8 (n~1 까지 짝수합 구하기 )

#include <stdio.h>

int count(int sum,int n){
    if(n < 1){
        return sum;
    }
    if(n%2==0){
        sum+=n;
    }
    count(sum,--n);
}

int main(){
    int N;
    scanf("%d",&N);
    printf("%d",count(0,N));
    return 0;
}
