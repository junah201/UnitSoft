//2356. 삽입 정렬 (Insertion Sort)

#include <stdio.h>

int N,A[10000];

int main() {
    scanf("%d",&N);
    for(int i=0;i<N;i++) scanf("%d",&A[i]);
    for(int i=1;i<N;i++){
        int j=i-1;
        while((A[j] > A[j+1])&&(j>=0)){
            int temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
            j--;
        }
            for(int j=0;j<N;j++) {
                printf("%d ",A[j]);
            }
            printf("\n");
    }
    return 0;
}
