//1135. 고기잡이(S)

#include <stdio.h>

int N; //연못의 폭
int W; //그물의 폭
int input[100]; //물고기의 가치
int sum,max=0;

int main() {
    scanf("%d %d",&N,&W);
    for(int i=0;i<N;i++) scanf(" %d",&input[i]);
    for(int i=0;i<=N-W;i++) { //시작값 지정
        sum=0;
        for(int k=0;k<W;k++) { //
            sum+=input[i+k];
        }
        if(sum>max) max=sum;
    }
    printf("%d",max);
    return 0;
}
