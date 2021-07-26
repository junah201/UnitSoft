//2440. [basic] 기초 함수 실습 문제 -24

#include<stdio.h>

int Divisor(int a){
    int count = 0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            count += 1;
        }
    }

    return count;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d Number of factors = %d\n",i,Divisor(i));
    }
    return 0;
}
