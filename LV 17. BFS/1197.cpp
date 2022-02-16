// 1197. 소수 경로

#include <stdio.h>
#include <queue>

using namespace std;

int T, result;
int check[10010];

struct num {
    int a[4];
    int time;
} start, idx, temp;

bool is_prime(int num) {
    for(int i=2;i*i<=num;i++) if(num%i==0) return 0;
    return 1;
}

int struct_to_int(struct num k) {
    return 1000 * k.a[0] + 100 * k.a[1] + 10 * k.a[2] + 1 * k.a[3];
}

int bfs() {
    queue <num> q;
    q.push(start);
    while(!q.empty()) {
        idx = q.front();
        if(idx.time > 10) return 1;
        if(struct_to_int(idx)==result) return idx.time;
        q.pop();
        for(int i=0;i<=3;i++) {
            for(int j=0;j<=9;j++) {
                if(i==0 && j==0) continue;
                int orgin = idx.a[i];
                if(orgin == j) continue;
                idx.a[i] = j;
                int value = struct_to_int(idx);
                if(check[value] == 0 && is_prime(value)) {
                    check[value] = 1;
                    idx.time++;
                    q.push(idx);
                    idx.time--;
                }
                idx.a[i] = orgin;
            }
        }
    }
    return -1;
}

int main() {
    scanf("%d", &T);
    while(T--) {
        for(int i=0;i<10000;i++) check[i] = 0;
        for(int i=0;i<4;i++) scanf("%1d", &start.a[i]);
        start.time = 0;
        scanf("%d", &result);
        int ans = bfs();
        if(ans == -1) printf("Impossible\n");
        else printf("%d\n", ans);
    }
    return 0;
}
