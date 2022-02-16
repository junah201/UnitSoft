// 1943. 준수 vs 민수

#include <stdio.h>
#include <queue>

using namespace std;

int N, M;
int ans=987654321;
int map[102][102];
int cnt[102][102];

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

struct block {
    int x;
    int y;
    int cnt;
} idx;

int bfs() {
    queue <block> q;
    q.push({1,1,0});
    while(!q.empty()) {
        idx = q.front();
        q.pop();
        for(int i=0;i<4;i++) {
            int rx = idx.x + dx[i];
            int ry = idx.y + dy[i];
            if(map[ry][rx] != -1 && idx.cnt + map[ry][rx] < cnt[ry][rx]) {
                cnt[ry][rx] = idx.cnt + map[ry][rx];
                q.push({rx, ry, cnt[ry][rx]});
            }
        }
    }
    return cnt[M][N];
}

int main() {
    for(int y=0;y<102;y++) for(int x=0;x<102;x++) map[y][x] = -1;
    for(int y=0;y<102;y++) for(int x=0;x<102;x++) cnt[y][x] = 987654321;
    scanf("%d %d", &N, &M);
    for(int y=1;y<=M;y++) for(int x=1;x<=N;x++) scanf("%d", &map[y][x]);
    printf("%d", bfs());
    return 0;
}
