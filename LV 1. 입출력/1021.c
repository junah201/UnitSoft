//1021. 인공지능 오븐

#include <stdio.h>

int a,b,c,d;

int main() {
    scanf("%d %d %d %d", &a, &b, &c, &d);
    c+=d;
    while(c>=60) {
        c-=60;
        b++;
    }
    while(b>=60) {
        b-=60;
        a++;
    }
    while(a>=24) {
        a-=24;
    }
    printf("%d %d %d", a, b, c);
    return 0;
}
