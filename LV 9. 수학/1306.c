//1306. 제곱수 판별

#include <stdio.h>
#include <math.h>

#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

int check(long long int x) {
    for(long long int i=1;i*i<=x;i++) {
        if(i*i==x) return 1;
    }
    return 0;
}

long long int get(long long int a,long long int b){
    if(a%b==0) return b;
    return get(b,a%b);
}

int main() {
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    long long int k=a*b/get(a,b);
    if(check(k)) printf("YES");
    else printf("NO");
    return 0;
}
