//2295. 좌표 압축

#include <stdio.h>
#include <algorithm>

struct a {
    int num;
    int idx;
    int x;
};

int N,temp;
struct a A[1000000];

int main() {
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d",&A[i].num);
        A[i].idx=i;
    }
    std::sort(A,A+N,[](struct a a,struct a b){
        if(a.num<b.num) return 1;
        return 0;
    });
    A[0].x=0;
    for(int i=1;i<N;i++) {
        if(A[i].num==A[i-1].num) {
            A[i].x=A[i-1].x;
        }
        else A[i].x=++temp;
    }
    std::sort(A,A+N,[](struct a a,struct a b){
        if(a.idx<b.idx) return 1;
        return 0;
    });
    for(int i=0;i<N;i++) printf("%d ",A[i].x);
    return 0;
}

