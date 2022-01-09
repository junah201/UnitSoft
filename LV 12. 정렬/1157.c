//1157. 수 정렬하기 (개수 정렬-Counting Sort)

#include <stdio.h>

int N,A[10001],temp;

int main() {
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d",&temp);
        A[temp]++;
    }
    for(int i=1;i<=10000;i++) {
        for(int j=0;j<A[i];j++) {
            printf("%d\n",i);
        }
    }
    return 0;
}
