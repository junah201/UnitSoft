//1109. dcomma

#include <stdio.h>
#include <string.h>

char str[101];
int len;

int main() {
    scanf("%s", str);
    len = strlen(str);
    for(int i=0;i<len;i++) {
        if(len%3==i%3 && i!=0) printf(",");
        printf("%c", str[i]);
    }
    return 0;
}
