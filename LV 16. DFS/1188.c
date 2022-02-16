// 1188. 부분집합의 합

#include <stdio.h>

int N,S;
int map[30],cnt;
int check[30];

int zero() {
    for(int i=0;i<N;i++) if(check[i]!=0) return 1;
    return 0;
}

void dfs(int idx, int sum) {
    if(idx==N) {
        if(sum==S && zero()) 
            cnt++;
        return;
    }
    check[idx] = 0;
    dfs(idx+1, sum);
    check[idx] = 1;
    dfs(idx+1, sum+map[idx]);
    return;
}

int main() {
    scanf("%d %d",&N,&S);
    for(int i=0;i<N;i++) scanf("%d",&map[i]);
    dfs(0,0);
    printf("%d",cnt);
    return 0;
}
