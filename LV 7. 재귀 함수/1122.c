//1122. 홀수 또는 짝수의 합 구하기

#include <stdio.h>

int sum=0;
int n;
int count(int x){
    if(x==0){
        return sum;
    }
    if(x%2==n%2){
        sum+=x;
    }
    count(--x);
}

int main(){
    scanf("%d",&n);
    printf("%d",count(n));
    return 0;
}
