//1143. 여러수의 최대 공약수

#include <stdio.h>
#include <math.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

int get(int a,int b) {
    if(a%b==0) return b;
    else return get(b,a%b);
}

int main() {
    int n,a,b;
    scanf("%d",&n);
    scanf("%d",&a);
    for(int i=0;i<n;i++) {
        scanf("%d",&b);
        a=get(max(a,b),min(a,b));
    }
    printf("%d\n",a);
    return 0;
}
