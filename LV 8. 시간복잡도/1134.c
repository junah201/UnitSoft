//1134. 최대값, 최소값 찾기

#include <stdio.h>

int N,min=1001,max=0;
int input[100];

int main() {
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf(" %d",&input[i]);
    }
    for(int i=0;i<N;i++) {
        if(input[i]<min) min = input[i];
        if(input[i]>max) max = input[i];
    }
    printf("%d %d",max,min);
    return 0;
}
