//2163. [basic] 재귀함수 실습문제 7(n~1 까지 합 구하기 )

#include <stdio.h>

int count(int sum,int n){
    if(n < 1){
        return sum;
    }
    sum+=n--;
    count(sum,n);
}

int main(){
    int N;
    scanf("%d",&N);
    printf("%d",count(0,N));
    return 0;
}
