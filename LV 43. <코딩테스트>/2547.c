// 2547. [배열] 도로 HARD

#include <stdio.h>

//map : 입력, 분할 누적합 : divsum
int map[1000001],divsum[10020][101], N, M, a, b, c;
int result;

int main() {
    scanf("%d", &N);

    for(int i=1;i<=N;i++) {
        scanf("%d", &map[i]);
        divsum[i/100][i%100+1] = divsum[i/100][i%100] + map[i];
    }

    scanf("%d", &M);
    while(M--) {
        scanf("%d %d %d", &a, &b, &c);
        // 1번 쿼리
        if(a==1) {
            result = 0;
            // 같은 div 칸에 있으면
            if(b/100 == c/100) {
                result = divsum[c/100][c%100+1] - divsum[b/100][b%100];
            }
            // 다른 div 칸에 있으면
            else {
                result = divsum[c/100][c%100+1] + divsum[b/100][100] - divsum[b/100][b%100];
                for(int i=b/100+1;i<c/100;i++) {
                    result += divsum[i][100];
                }
            }
            printf("%d\n", result);
        }
        // 2번 쿼리
        else if(a==2) {
    
            map[b] = c;
            for(int i=1;i<=100;i++) {
                divsum[b/100][i] = divsum[b/100][i-1] + map[b-b%100+i-1];
            }
        }
    }
    return 0;
}