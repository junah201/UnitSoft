//2160. [basic] 재귀함수 실습문제 5 (1~n까지 짝수만 출력하기 )

#include <stdio.h>

int count(int n,int end){
    if(n > end){
        return 0;
    }
    if(n%2==0){
        printf("%d\n",n);
    }
    n++;
    count(n,end);
}

int main(){
    int N;
    scanf("%d",&N);
    count(1,N);
    return 0;
}
