//2169. [basic] 재귀함수 실습문제 13 (n~m까지 홀수만 출력하기)

#include <stdio.h>

int count(int n,int m){
    if(n>m){
        return 0;
    }
    if(n%2==1){
        printf("%3d",n);
    }
    count(++n,m);
}

int main(){
    int N,M;
    scanf("%d %d",&N,&M);
    count(N,M);
    return 0;
}
