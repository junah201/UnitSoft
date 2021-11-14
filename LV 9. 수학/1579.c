//1579. 대각선

#include <stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

int gcd(int a,int b) {
    if(a%b==0) return b;
    return gcd(b,a%b);
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a+b-gcd(max(a,b),min(a,b)));
    return 0;
}
