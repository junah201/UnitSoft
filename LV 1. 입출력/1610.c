//1610. 시간 형식 바꾸기

#include <stdio.h>

int main() {
    int a,b;
    scanf("%2d\' %2d\"", &a, &b);
    printf("%02d:%02d",a,b);
    return 0;
}
