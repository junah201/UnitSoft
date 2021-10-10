//2229. [basic] 재귀함수 연습문제 10 (Change Base)

#include <stdio.h>

int n,k;
char hex[] = "0123456789ABCDEF";

int get(int x) {
    if(x/k==0) {
        printf("%c",hex[x%k]);
        return 0;
    }
    get(x/k);
    printf("%c",hex[x%k]);
    return 0;
}

int main() {
    scanf("%d %d",&n,&k);
    get(n);
}
