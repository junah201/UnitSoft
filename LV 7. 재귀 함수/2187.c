//2187. [basic] 재귀함수 실습문제 15

#include <stdio.h>

int count(char n){
    if(n>122){
        return 0;
    }
    if(n%2==1){
        printf("%3c",n-32);
    }else{
        printf("%3c",n);
    }
    count(++n);
}

int main(){
    int N;
    scanf("%c",&N);
    count(N);
    return 0;
}
