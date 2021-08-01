//2217. [basic] 재귀함수 실습문제 23

#include <stdio.h>

int num = 0;
int add = 1;

int count(int n){
    printf("%d\n",n);
    if(n==1){
        return 0;
    }
    if(n%2==0){
        n=n/2;
    }else{
        n=3*n+1;
    }
    count(n);
}
int main(){
    int N;
    scanf("%d",&N);
    count(N);
    return 0;
}
