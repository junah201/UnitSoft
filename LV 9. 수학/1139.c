//1139. 유클리드 호제법

#include <stdio.h>
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))

int get(int a,int b) {
    if(a%b==0) return b;
    return get(b,a%b);
}   

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
	printf("%d",get(max(a,b),min(a,b)));
	return 0;
}
