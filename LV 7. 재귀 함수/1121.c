//1121. x의 n제곱 구하기

#include <stdio.h>
int x,n;
int sum=1;
int count(int x,int n){
    if(n==0){
        return sum;
    }
    sum=sum*x;
    count(x,n-1);
}

int main(){
    scanf("%d %d",&x,&n);
    printf("%d",count(x,n));
    return 0;
}
