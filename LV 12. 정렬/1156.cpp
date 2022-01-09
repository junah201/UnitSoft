//1156. 점수 집계

#include <stdio.h>
#include <algorithm>

int N,A[5];

int main() {
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        for(int j=0;j<5;j++) scanf("%d",&A[j]);
        std::sort(A,A+5);
        if(A[3]-A[1]>=4) printf("KIN\n");
        else printf("%d\n",A[1]+A[2]+A[3]);
    }
    return 0;
}
