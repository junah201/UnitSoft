//2161. [basic] 재귀함수 실습문제 6(n~1까지 6의 배수만 출력하기 )

#include <stdio.h>

int count(int n){
    if(n < 1){
        return 0;
    }
    if(n%6==0){
        printf("%5d",n);
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
