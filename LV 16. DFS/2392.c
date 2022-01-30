// 2392. 신장개업 (S)

#include <stdio.h>

int N, max, id = 99999999;

int value[102];
int check[102];
int map[102][102];

void dfs(int idx, int result, int start) {
    for(int i=1;i<=N;i++) {
        if(map[idx][i]==1 && check[i]==0) {
            check[i] = 1;
            dfs(i, result+value[i], start);
            check[i] = 0;
        }
    }
    if(result == max) {
        if(start < id) id = start;
    }
    else if(result > max) {
        max = result;
        id = start;
    }
    return;
}

int main() {
    scanf("%d", &N);
    id = N;
    for(int i=1;i<=N;i++) {
        scanf("%d", &value[i]);
    }
    int x,y;
	for(int i=1;i<N;i++) {
		scanf("%d %d",&x,&y);
		map[x][y] = 1;
		map[y][x] = 1;
	}
	for(int i=1;i<=N;i++) {
        check[i] = 1;
		dfs(i, value[i], i);
        check[i] = 0;
	}
    printf("%d %d",max,id);
    return 0;
}
