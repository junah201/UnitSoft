//1922. 약수의 개수의 합 Small

#include <stdio.h>

int main() {
    int a,b;
    int sum=0;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=b;i++) {
        sum+=(b/i)-(a-1)/i;
    }
    printf("%d",sum);
    return 0;
}
