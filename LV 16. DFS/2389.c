//2389. 마이야르 중심방송 류빈아빠

#include <stdio.h>

int map[1010][1010];
int id[1010][1010];
int used_ids[4];

int check[1010][1010];

int N, M;
int max, cnt, num;

//           ↑  ↓  →   ← 
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};


void init_used_ids() {
	for (int i = 0; i < 4; i++) {
		used_ids[i] = 0;
	}
}

int check_id(int id) {
	for(int i=0;i<4;i++) {
		if(used_ids[i] == id) {
			return 0;
		}
	}
	return 1;
}

int cnt_bfs(int x, int y) {
	cnt++;
	for(int i=0;i<4;i++) {
		if(map[ y+dy[i] ][ x+dx[i] ] == 1 && check[ y+dy[i] ][ x+dx[i] ] == 0) {
			check[ y+dy[i] ][ x+dx[i] ] = 1;
			cnt_bfs(x+dx[i], y+dy[i]);
		}
	}
	return 0;
}

int set_bfs(int x, int y) {//2389. 마이야르 중심방송 류빈아빠

#include <stdio.h>

int map[1001][1001];
int ids[100000];
int used[4];
int check[1001][1001];

int N, M;
int max, cnt, num;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int check_id(int id) {
	for(int i=0;i<4;i++) if(used[i] == id) return 0;
	return 1;
}
int dfs(int x, int y) {
	cnt++;
	map[y][x] = num;
	for(int i=0;i<4;i++) {
		if(map[y+dy[i]][x+dx[i]] == 1 && check[y+dy[i]][x+dx[i]] == 0) {
			check[y+dy[i]][x+dx[i]] = 1;
			dfs(x+dx[i], y+dy[i]);
		}
	}
	return 0;
}
int main() {
	scanf("%d %d", &N, &M);
	for(int y=1;y<=N;y++) {
		for(int x=1;x<=M;x++) {
			scanf("%d", &map[y][x]);
		}
	}
	for(int y=1;y<=N;y++) {
		for(int x=1;x<=M;x++) {
			if(map[y][x]==1 && check[y][x]==0) {
				num++;
				cnt = 0;
				check[y][x] = 1;
				dfs(x, y);
				ids[num] = cnt;
			}
		}
	}
	for(int y=1;y<=N;y++) {
		for(int x=1;x<=M;x++) {
			if(map[y][x]==0) {
				int result = 0;
				for (int i=0;i<4;i++) used[i] = 0;
				for(int i=0;i<4;i++) {
					if(check_id(map[y+dy[i]][x+dx[i]])==1) {
						used[i] = map[y+dy[i]][x+dx[i]];
						result += ids[map[y+dy[i]][x+dx[i]]];
					}
				}
				if(result > max) max = result;
			}
		}
	}
	printf("%d", max+1);
	return 0;
}

	map[y][x] = cnt;
	id[y][x] = num;
	for(int i=0;i<4;i++) {
		if(map[ y+dy[i] ][ x+dx[i] ] == 1) {
			check[ y+dy[i] ][ x+dx[i] ] = 1;
			set_bfs(x+dx[i], y+dy[i]);
		}
	}
	return 0;
}


int main() {
	scanf("%d %d", &N, &M);
	for(int y=1;y<=N;y++) {
		for(int x=1;x<=M;x++) {
			scanf("%d", &map[y][x]);
		}
	}

	for(int y=1;y<=N;y++) {
		for(int x=1;x<=M;x++) {
			if(map[y][x]==1 && check[y][x]==0) {
				num++;
				cnt = 0;
				check[y][x] = 1;
				cnt_bfs(x, y);
				set_bfs(x, y);
			}
		}
	}

	for(int y=1;y<=N;y++) {
		for(int x=1;x<=M;x++) {
			if(map[y][x]==0) {
				int result = 0;
				init_used_ids();
				for(int i=0;i<4;i++) {
					if(check_id(id[y+dy[i]][x+dx[i]])==1) {
						used_ids[i] = id[y+dy[i]][x+dx[i]];
						result+= map[ y+dy[i] ][ x+dx[i] ];
					}
				}
				if(result > max) {
					max = result;
				}
			}
		}
	}

	printf("%d", max+1);
	return 0;
}
