//2188. [basic] 재귀함수 실습문제 16

#include <stdio.h>

int count(char i,char n){
    if(i<n){
        return 0;
    }
    if(i%2==0){
        printf("%3c",i-32);
    }else{
        printf("%3c",i);
    }
    count(--i,n);
}

int main(){
    int N;
    scanf("%c",&N);
    count(122,N);
    return 0;
}
