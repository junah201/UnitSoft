//1144. 골드바하의 추측

#include <stdio.h>

int check[1000000];

int main() {
    int a;
    scanf("%d",&a);
    check[0]=1;
    check[1]=1;
    for(int i=2;i<=a;i++) {
        if(!check[i]) {
            for(int j=2*i;j<=a;j+=i) {
                check[j]=1;
            }
        }
    }
    for(int i=2;i<a;i++) {
        if(!check[i] && !check[a-i]) {
            printf("%d = %d + %d",a,i,a-i);
            return 0;
        }
    }
    return 0;
}
