//1659. 길이 구하기

#include <stdio.h>
#include <math.h>

float get(int a, int b){
    return (a+b)*3.14159 + sqrt(a*a+a*a) + sqrt(b*b+b*b);
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    printf("%.3f",get(a,b));

    return 0;
}
