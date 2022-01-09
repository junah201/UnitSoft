//1171. 슬라이딩 윈도우
//큐로 풀어야하는데 투포인터로 품 다시 풀어야하는 문제

#include <stdio.h>

int K[100000],min[100000],max[100000],mi,mx;
int N,L,low,high;

int main() {
    scanf("%d %d",&N,&L);
    for(int i=0;i<N;i++) scanf("%d",&K[i]);
    //초기 세팅
    mi=K[0];
    mx=K[0];
    for(int i=0;i<L;i++) {
        if(K[i]<mi) mi = K[i];
        if(K[i]>mx) mx = K[i];
    }
    low = 1;
    high = L;
    max[0]=mx;
    min[0]=mi;
    while(high!=N) {
        //mx
        if(mx==K[low-1]) {
            if(mx<=K[high]) mx=K[high];
            else {
                mx=K[low];
                for(int i=low+1;i<=high;i++) {
                    if(K[i]>mx) mx=K[i];
                }
            }
        }
        else if(mx<=K[high]) mx=K[high];
        //mi
        if(mi==K[low-1]) {
            if(mi>=K[high]) mi=K[high];
            else {
                mi=K[low];
                for(int i=low+1;i<=high;i++) {
                    if(K[i]<mi) mi=K[i];
                }
            }
        }
        else if(mi>=K[high]) mi=K[high];

        max[low]=mx;
        min[low]=mi;
        low++;
        high++;
    }
    for(int i=0;i<=N-L;i++) printf("%d ",min[i]);
    printf("\n");
    for(int i=0;i<=N-L;i++) printf("%d ",max[i]);
    printf("\n");
    return 0;
}
