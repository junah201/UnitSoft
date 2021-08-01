//2221. [basic] 재귀함수 연습문제 3

#include <stdio.h>
int N;
int add=1;
int count(int i){
    if(i==N){
        add*=-1;
    }
    if(i==0){
        return 0;
    }
    printf("%d",i);
    count(i+add);
}

int main(){

    scanf("%d",&N);
    count(1);
    return 0;
}
