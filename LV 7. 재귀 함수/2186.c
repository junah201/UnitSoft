//2186. [basic] 재귀함수 실습문제 14

#include <stdio.h>

int count(char n){
    if(n>122){
        return 0;
    }
    printf("%3c",n);
    count(++n);
}

int main(){
    int N;
    scanf("%c",&N);
    count(N);
    return 0;
}
