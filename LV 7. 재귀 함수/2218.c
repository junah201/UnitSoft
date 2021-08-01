//2218. [basic] 재귀함수 실습문제 24

#include <stdio.h>

int N;

int count(int n){
    printf("%d\n",n);
    if(n==3*N+1){
        printf("%d",N);
        return 0;
    }
    n=n*2;
    count(n);
}

int main(){
    scanf("%d",&N);
    count(1);
    return 0;
}
