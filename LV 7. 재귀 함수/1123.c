//1123. 토끼의 수 구하기

#include <stdio.h>

int sum=0;
int n;
int a1=1,a2=0;
int count(int x){
    if(x==0){
        return a1+a2;
    }
    int temp = a2;
    a2+=a1;
    a1 = temp;
    count(--x);
}

int main(){
    scanf("%d",&n);
    printf("%d",count(n));
    return 0;
}
