//2466. 생년월일 정리(L)

#include <stdio.h>
#include <algorithm>

struct student{
    int A,B,C;
};

int N;
struct student A[100001];

int main() {
    //입력
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d.%d.%d",&A[i].A,&A[i].B,&A[i].C);
    }
    //정렬
    std::sort(A,A+N,[](student a,student b){
        if(a.A==b.A) {
            if(a.B==b.B) {
                return a.C<b.C;
            }
            return a.B<b.B;
        }
        return a.A<b.A;
    });
    //출력
    for(int x=0;x<N;x++) printf("%d.%02d.%02d\n",A[x].A,A[x].B,A[x].C);
    printf("\n");
    return 0;
}
