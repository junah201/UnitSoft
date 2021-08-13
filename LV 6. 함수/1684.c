//1684. units (일의 자리)

#include <stdio.h>

int get(int x){
    if(x<10){
        return x;
    }
    int num = x;
    int sum=0;
    while(num) {
        sum += num % 10;
        num /= 10;
    }
    get(sum);
}

int main(){
    int n, m;
    scanf("%d",&n);

    printf("%d",get(n));
}
