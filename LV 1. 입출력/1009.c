//1009. 두수의 교환

#include <stdio.h>

int main(){
    int N,M;
    scanf("%d %d", &N,&M);
    int temp = N;
    N = M;
    M = temp;
    printf("%d %d",N,M);
    return 0;
}
