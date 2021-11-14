//1146. 약수의 합

#include <stdio.h>

int main() {
    unsigned long long int a,sum=0;
    scanf("%llu",&a);
    for(unsigned long long int i=1;i*i<=a;i++) {
        if(i*i==a) {
            sum+=i;
        }else if(a%i==0) {
            sum+=i;
            sum+=a/i;
        }
    }
    printf("%llu",sum);
    return 0;
}
