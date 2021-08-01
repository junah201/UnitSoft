//2166. [basic] 재귀함수 실습문제 10 (3,6,9,3,6,9 ver 2)

#include <stdio.h>

int count(int n){
    if(n < 1){
        return 0;
    }
    if(n-n/10*10==3){
        printf("  X");
    }else{
        printf("%3d",n);
    }
    count(--n);
}

int main(){
    int N;
    scanf("%d",&N);
    count(N);
    return 0;
}
