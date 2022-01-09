//1927. 약수의 개수의 합 Very Small

#include <stdio.h>

int main() {
    int a,b,sum=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++) {
        for(int j=1;j<=i;j++) {
            sum+=!(i%j);
        }
    }
    printf("%d",sum);
    return 0;
}
