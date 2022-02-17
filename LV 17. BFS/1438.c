// 1438. 회로 배치

#include <stdio.h>
#include <queue>
 
using namespace std;
 
int N, K, T, L;
int map[51][51];
 
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
 
struct block {
    int x;
    int y;
} s, e, cur;

int bfs() {
    queue <block> q;
    q.push({s.x, s.y});
    int cost[51][51];
    for(int x=0;x<51;x++) for(int y=0;y<51;y++) cost[x][y] = 987654321;
    cost[s.x][s.y] = 1;
    while(!q.empty()) {
        cur = q.front();
        q.pop();
        if(cur.x == e.x && cur.y == e.y) continue;
        for(int i=0;i<4;i++) {
            int rx = cur.x + dx[i];
            int ry = cur.y + dy[i];
            if(rx <= 0 || ry <= 0 || rx > N || ry > N) continue;
            if(cost[rx][ry] > cost[cur.x][cur.y] + map[rx][ry]) {
                cost[rx][ry] = cost[cur.x][cur.y] + map[rx][ry];
                q.push({rx, ry});
            }
        }
    }
    return cost[e.x][e.y];
}
 
int main() {
    scanf("%d", &N);
    scanf("%d %d %d %d", &s.y, &s.x, &e.y, &e.x);
    scanf("%d", &K);
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &L);
        int x1, y1, x2, y2, temp;
        scanf("%d %d", &y1, &x1);
        L--;
        while(L--) {
            scanf("%d %d", &y2, &x2);
            if(x1 == x2) {
                if(y1 > y2) temp = 1;
                else temp = 0;
                while(y1 != y2) {
                    if(temp) map[x1][y1--] += K;
                    else map[x1][y1++] += K;
                }
            }
            else if(y1 == y2) {
                if(x1 > x2) temp = 1;
                else temp = 0;
                while(x1 != x2) {
                    if(temp) map[x1--][y1] += K;
                    else map[x1++][y1] += K;
                }
            }
            x1 = x2;
            y1 = y2;
        }
        map[x2][y2] += K;
    }
    for(int y=1;y<=N;y++) for(int x=1;x<=N;x++) if(map[x][y] == 0) map[x][y] = 1;
    printf("%d", bfs());
    return 0;
}
