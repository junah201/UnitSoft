// 1192. 깊이 우선 탐색과 너비 우선 탐색

#include <stdio.h>
#include <queue>

using namespace std;

int N, E;
int map[100][100];
int check[30];

int dfs(int idx) {
    check[idx] = 1;
    printf("%c",idx+'A');
    for(int i=0;i<N;i++) {
        if(map[idx][i]==1 && check[i]==0) {
            dfs(i);
        }
    }
    return 0;
}

int bfs(int start) {
    for(int i=0;i<N;i++) check[i] = 0;
    queue <int> q;
    q.push(start);
    check[start] = 1;
    int idx;
    while(! q.empty()) {
        idx = q.front();
        q.pop();
        printf("%c", idx+'A');
        for(int i=0;i<N;i++) {
            if(map[idx][i]==1 && check[i]==0) {
                check[i] = 1;
                q.push(i);
            }
        }
    }
}

int main() {
    scanf("%d %d ", &N, &E);
    char t1,t2;
    while(E--) {
        scanf(" %c %c", &t1, &t2);
        t1 -= 'A';
        t2 -= 'A';
        map[t1][t2] = 1;
        map[t2][t1] = 1;
    }
    char start;
    scanf(" %c", &start);
    start -= 'A';
    dfs(start);
    printf("\n");
    bfs(start);
    return 0;
}
