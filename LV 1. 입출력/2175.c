//2175. 초를 시간으로

#include <stdio.h>

int main() {
    int sec;
    scanf("%d", &sec);
    printf("%d ", sec / 86400);
    printf("%d ", (sec % 86400) / 3600);
    printf("%d ", (sec % 3600) / 60);
    printf("%d\n", sec % 60);
    return 0;
}
