// 1195. 탈출

#include <stdio.h>
#include <queue>

using namespace std;

int R, C;
char map[52][52];

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

struct block {
    int x;
    int y;
    int time;
} temp, w, b;

queue <block> water;
queue <block> beaver;

void move_water() {
    w = water.front();
    int orgin_time = w.time;
    while(!water.empty()) {
        w = water.front();
        if(w.time != orgin_time) return;
        water.pop();
        for(int i=0;i<4;i++) {
            int rx = w.x + dx[i];
            int ry = w.y + dy[i];
            if(map[ry][rx] == 'X' || map[ry][rx] == '*' || map[ry][rx] == 'D') continue;
            map[ry][rx] = '*';
            temp.x = rx;
            temp.y = ry;
            temp.time = w.time + 1;
            water.push(temp);
        }
    }
}

int bfs() {
    int orgin_time = -1;
    while(!beaver.empty()) {
        b = beaver.front();
        beaver.pop();
        if(orgin_time != b.time) move_water();
        orgin_time = b.time;

        for(int i=0;i<4;i++) {
            int rx = b.x + dx[i];
            int ry = b.y + dy[i];
            if(map[ry][rx] == 'X' || map[ry][rx] == '*' || map[ry][rx] == 'S') continue;
            if(map[ry][rx] == 'D') return b.time + 1;
            
            map[ry][rx] = 'S';
            temp.x = rx;
            temp.y = ry;
            temp.time = b.time + 1;
            beaver.push(temp);
            
        }
    }
    return -1;
}

int main() {
    for(int y=0;y<=51;y++) for(int x=0;x<=51;x++) map[y][x] = 'X';
    scanf("%d %d", &R, &C);
    for(int y=1;y<=R;y++) {
        for(int x=1;x<=C;x++) {
            scanf(" %c", &map[y][x]);
            if(map[y][x] == '*') {
                temp.x = x;
                temp.y = y;
                temp.time = 0;
                water.push(temp);
            }
            else if(map[y][x] == 'S') {
                temp.x = x;
                temp.y = y;
                temp.time = 0;
                beaver.push(temp);
            }
        }
    }

    int result = bfs();
    if(result == -1) printf("KAKTUS");
    else printf("%d", result);
    return 0;
}
