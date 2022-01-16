//1178. 인접 행렬

#include <stdio.h>

int N,M,x,y;
int map[1001][1001];

int main() {
    scanf("%d %d", &N, &M);
	for(int i=0;i<M;i++) {
		scanf("%d %d",&x,&y);
		map[x-1][y-1] = 1;
		map[y-1][x-1] = 1;
	}
	for(int i=0;i<N;i++) {
		for(int j=0;j<N;j++) {
			printf("%d ",map[i][j]);
		}
		printf("\n");
	}
    return 0;
}
