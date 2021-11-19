//2216. 아이스크림

#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a/(b+1)*b+a%(b+1));
    return 0;
}
