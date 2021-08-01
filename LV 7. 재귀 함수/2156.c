//2156. [basic] 재귀함수 실습문제 1 (n~1 까지 출력하기)

#include <stdio.h>

int count(int n){
    if(n < 1){
        return 0;
    }
    printf("%d\n",n--);
    count(n);
}

int main(){
    int N;
    scanf("%d",&N);
    count(N);
    return 0;
}
