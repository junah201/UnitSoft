//2465. 생년월일 정리(S)

#include<stdio.h>

struct student{
    int A,B,C;
};

int N;
struct student A[1000];
struct student temp;

int main() {
    //입력
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d.%d.%d",&A[i].A,&A[i].B,&A[i].C);
    }
    //정렬
    for(int i=0;i<N;i++) {
        for(int j=0;j<N-1-i;j++) {
            if(A[j].A>A[j+1].A || (A[j].A==A[j+1].A && A[j].B>A[j+1].B) || (A[j].A==A[j+1].A && A[j].B==A[j+1].B && A[j].C>A[j+1].C)) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    //출력
    for(int x=0;x<N;x++) printf("%d.%02d.%02d\n",A[x].A,A[x].B,A[x].C);
    printf("\n");
    return 0;
}
