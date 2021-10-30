//1136. 고기잡이 (L)

#include <stdio.h>

int N,M; //연못의 폭 (y,x)
int W,H; //그물의 폭 (y,x)
int input[100][100]; //연못 = 물고기의 가치
int sum,max=0; //합계, 최대값 변수

//x,y로 시작하는 그물의 합을 구하기
int get_sum(int x,int y) {
    int result=0;
    for(int i=0;i<W;i++) {
        for(int j=0;j<H;j++) {
            result+=input[y+i][x+j];
        }
    }
    return result;
}

int main() {
    //입력
    scanf(" %d %d",&N,&M); //N이 y, M이 x
    scanf(" %d %d",&W,&H); //W가 y, H가 x
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++) {
            scanf(" %d",&input[i][j]);
        }
    }

    //최대값 구하기
    for(int i=0;i<=M-H;i++) { //시작값 지정
        for(int j=0;j<=N-W;j++) {
            sum=get_sum(i,j);
            if(sum>max) max=sum;
        }
    }
    printf("%d",max);
    return 0;
}
