//1116. 뒤집어 더하기

#include <stdio.h>

int get(int x){
    int num = x;
    int sum=0;
    while(num) {
        sum*=10;
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main(){
    int n, m;
    scanf("%d %d",&n,&m);

    printf("%d",get(get(n)+get(m)));
}
