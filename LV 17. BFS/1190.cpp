// 1190. 단지 번호 붙이기 (1996)

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int N, K[30][30], cnt, ans;
vector <int> v;
int d[4][2] = {
    {1,0},
    {0,1},
    {-1,0},
    {0,-1}
};


int dfs(int x, int y) {
    K[y][x] = 0;
    cnt++;
    for(int i=0;i<4;i++) {
        int dx = x+d[i][0];
        int dy = y+d[i][1];
        if(K[dy][dx]==1) dfs(dx,dy);
    }
    return 0;
}

int main() {
    scanf("%d", &N);
    for(int y=1;y<=N;y++) {
        for(int x=1;x<=N;x++) {
            scanf("%d", &K[y][x]);
        }
    }

    for(int y=1;y<=N;y++) {
        for(int x=1;x<=N;x++) {
            if(K[y][x]==1) {
                ans++;
                cnt = 0;
                dfs(x,y);
                v.push_back(cnt);
            }
        }
    }
    printf("%d\n",ans);
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++) printf("%d\n", v[i]);
    return 0;
}
