//1686. 앞뒤가 똑같은 prime

#include <stdio.h>

int get(int x){
    for(int i=2;i<x;i++){
        if(x%i==0){
            return 0;
        }
    }
    int num = x;
    int sum=0;
    while(num) {
        sum *= 10;
        sum += num % 10;
        num /= 10;
    }
    for(int i=2;i<sum;i++){
        if(sum%i==0){
            return 1;
        }
    }
    return 2;
}

int main(){
    int n;
    scanf("%d",&n);

    if(get(n)==0){
        printf("%d is not prime",n);
    }else if(get(n)==1){
        printf("%d is a prime",n);
    }else if(get(n)==2){
        printf("%d is an emirp",n);
    }
    return 0;
}
