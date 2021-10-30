//1153. 등급

#include<stdio.h>

struct student{
    int no;
    int A,B,C;
};

int N;
struct student A[101];
struct student temp;

int main() {
    //입력
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        A[i].no=i+1;
        scanf("%d %d %d",&A[i].A,&A[i].B,&A[i].C);
    }
        //정렬
    for(int i=0;i<N;i++) {
        for(int j=0;j<N-1-i;j++) {
            if(A[j].A>A[j+1].A || (A[j].A==A[j+1].A && A[j].B>A[j+1].B) || (A[j].A==A[j+1].A && A[j].B==A[j+1].B && A[j].C>A[j+1].C)||(A[j].A==A[j+1].A&&A[j].B==A[j+1].B&&A[j].C==A[j+1].C&&A[j].no<A[j+1].no)) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    //출력
    for(int x=0;x<N;x++) printf("%d ",A[x].no);
    printf("\n");
    return 0;
}
