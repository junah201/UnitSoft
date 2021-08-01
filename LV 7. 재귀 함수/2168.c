//2168. [basic] 재귀함수 실습문제 12 (3,6,9,3,6,9 ver4)

#include <stdio.h>

int count(int n,int end){
    if(n > end){
        return 0;
    }
    if(n-n/10*10==3 && n%3==0){
        printf(" XX");
    }else if(n-n/10*10==3 || n%3==0){
        printf("  X");
    }else{
        printf("%3d",n);
    }
    count(++n,end);
}

int main(){
    int N;
    scanf("%d",&N);
    count(1,N);
    return 0;
}
