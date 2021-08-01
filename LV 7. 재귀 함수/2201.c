//2201. [basic] 재귀함수 실습문제 17

#include <stdio.h>

int count(int sum,int n){
    if(n==0){
        return sum;
    }
    sum*=n;
    count(sum,--n);
}

int main(){
    int N;
    scanf("%d",&N);
    printf("%d",count(1,N));
    return 0;
}
