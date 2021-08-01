//2158. [basic] 재귀함수 실습문제 3 (n개 *출력하기)

#include <stdio.h>

int count(int n){
    if(n < 1){
        return 0;
    }
    printf("*",n--);
    count(n);
}

int main(){
    int N;
    scanf("%d",&N);
    count(N);
    return 0;
}
