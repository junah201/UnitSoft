//2157. [basic] 재귀함수 실습문제 2 (1~n 까지 출력하기)

#include <stdio.h>

int count(int n,int start){
    if(n > start){
        return 0;
    }
    printf("%d\n",n++);
    count(n,start);
}

int main(){
    int N;
    scanf("%d",&N);
    count(1,N);
    return 0;
}
