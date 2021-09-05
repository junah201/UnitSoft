//1423. 정수 조합

#include <stdio.h>

int K,N;
int Arr[20];
int sum;
int get(int idx) {
    if(idx==N){
        sum = 0;
        for(int i=0;i<N;i++) {
            sum += Arr[i];
        }
        if(sum==K){
            for(int i=0;i<N;i++){
                printf("%d ",Arr[i]);
            }
            printf("\n");
        }
        return 0;
    }
    for(int i=1; i<=K-N+1; i++) {
        Arr[idx] = i;
        sum = 0;
        for(int i=0;i<idx;i++) {
            sum += Arr[i];
        }
        if(sum<K) {
            get(idx+1);
        }
    }
    return 0;
}

int main() {
    scanf("%d %d",&N,&K);
    get(0);
    return 0;
}
