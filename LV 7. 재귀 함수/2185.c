//2185. [basic] 재귀함수 실습문제 13 (n~1까지 m의 배수 출력하기)

#include <stdio.h>

int count(int n,int m){
    if(n==0){
        return 0;
    }
    if(n%m==0){
        printf("%3d",n);
    }
    count(--n,m);
}

int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    count(N,M);
    return 0;
}
