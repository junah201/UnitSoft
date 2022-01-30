// 2388. 지금 당산역 방면으로 가는 내선순환 열차가 들어오고 있습니다

#include <stdio.h>

int N,isFind,isCopmlete;
int isCycle[3002];
int map[3002][3002];
int check[3002];
int lens[3002];

void find(int idx, int len) {
    for(int i=1;i<=N;i++) {
        if(isCopmlete == 1) {
            return;
        }
        if(isFind) {
            isCycle[idx] = 1;
            if(idx == isFind) {
                isCopmlete = 1;
            }
            return;
        }
        if(map[idx][i]==1 && check[i]==0) {
            map[idx][i] = 0;
            map[i][idx] = 0;
            check[i] = 1;
            find(i,len+1);
            check[i] = 0;
            map[idx][i] = 1;
            map[i][idx] = 1;
        }
        if(map[idx][i]==1 && check[i]==1) {
            isCycle[idx] = 1;
            isFind = i;
            return;
        }
    }
    if(isCopmlete == 1) {
        return;
    }
    if(isFind) {
        isCycle[idx] = 1;
        if(idx == isFind) {
            isCopmlete = 1;
        }
        return;
    }
}

void getLen(int idx, int len) {
    //printf("f %d %d\n",idx,len);
    if(isCycle[idx]==1) {
        lens[idx] = 0;
        isCopmlete=len;
        return;
    }
    for(int i=1;i<=N;i++) {
        if(map[idx][i] == 1) {
            map[idx][i] = 0;
            map[i][idx] = 0;
            getLen(i,len+1);
            map[idx][i] = 1;
            map[i][idx] = 1;
            if(isCopmlete) {
                lens[idx] = isCopmlete-len;
                return;
            }
        }
    }
    if(isCopmlete) {
        lens[idx] = isCopmlete-len;
        return;
    }
    return;
} 

int main() {
    scanf("%d",&N);
    int t1, t2;
    for(int i=0;i<N;i++) {
        scanf("%d %d", &t1, &t2);
        map[t1][t2] = 1;
        map[t2][t1] = 1;
    }
    check[1] = 1;
    find(1,0);


    for(int i=1;i<=N;i++) lens[i] = -1;
    for(int i=1;i<=N;i++) {
        isCopmlete = 0;
        if(lens[i]==-1) getLen(i, 0);
        printf("%d ", lens[i]);
    }
    return 0;
}
