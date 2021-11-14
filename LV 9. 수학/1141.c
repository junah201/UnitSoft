//1141. prime

#include <stdio.h>
#include <math.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

int get(int x) {
    for(int i=2;i*i<=x;i++) {
        if(x%i==0) return 0;
    }
    return 1;
}

int main() {
    int a;
    scanf("%d",&a);
    if(a==1) {
        printf("not prime");
        return 0;
    }
    if(get(a)) printf("prime");
    else printf("not prime");
	return 0;
}
