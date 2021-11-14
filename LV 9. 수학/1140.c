//1140. gcd_lcm

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
    int gcd_lcm = get(max(a,b),min(a,b));
	  printf("%d %d",gcd_lcm,a*b/gcd_lcm);
	  return 0;
}
