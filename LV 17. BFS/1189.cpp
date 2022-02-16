// 1189. 가장 빠른 길 찾기

#include <stdio.h>
#include <queue>

using namespace std;

int N, M;
int map[102][102];

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

struct block {
    int x;
    int y;
    int time;
};

int bfs() {
    queue <block> q;
    struct block temp;
    temp.x = 1;
    temp.y = N;
    temp.time = 1;
    q.push(temp);
    struct block idx;
    while(!q.empty()) {
        idx = q.front();
        q.pop();
        if(idx.x==M && idx.y==1) return idx.time;
        for(int i=0;i<4;i++) {
            int rx = idx.x + dx[i];
            int ry = idx.y + dy[i];
            if(map[ry][rx] == 0) {
                temp.x = rx;
                temp.y = ry;
                temp.time = idx.time + 1;
                q.push(temp);
                map[ry][rx] = 1;
            }
        }
    }
    return -1;
}

int main() {
    //map 초기화
    for(int y=0;y<=101;y++) {
        for(int x=0;x<=101;x++) {
            map[y][x] = 1;
        }
    }
    scanf("%d %d", &N, &M);
    for(int y=1;y<=N;y++) {
        for(int x=1;x<=M;x++) {
            scanf("%1d", &map[y][x]);
        }
    }

    printf("%d", bfs());
    return 0;
}
