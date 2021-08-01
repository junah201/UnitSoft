//2204. [basic] 재귀함수 실습문제 20

#include <stdio.h>

int print(int i){
    if(i==0){
        printf("\n");
        return 0;
    }
    printf("*");
    print(--i);
}

int count(int i,int n){
    if(i==0){
        return 0;
    }
    print(n);
    count(--i,n);
}

int main(){
    int N;
    scanf("%d",&N);
    count(N,N);
    return 0;
}
