//2159. [basic] 재귀함수 실습문제 4 (n~1까지 홀수만 출력하기 )

#include <stdio.h>

int count(int n){
    if(n < 1){
        return 0;
    }
    if(n%2==1){
        printf("%d\n",n);
    }
    n--;
    count(n);
}

int main(){
    int N;
    scanf("%d",&N);
    count(N);
    return 0;
}
