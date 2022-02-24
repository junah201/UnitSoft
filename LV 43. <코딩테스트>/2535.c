// 2535. [이진트리] 크리스마스 트리의 조건 - 1

#include <stdio.h>

int N;

struct Node {
    int right;
    int left;
} graph[100002];

struct pair {
    int first;
    int second;
};

int max(pair a) {
    if(a.first > a.second) return a.first;
    return a.second;
}

int abs(int num) {
    if(num < 0) return -num;
    return num;
}

pair get(int idx) {
    if(idx == 0) return {1,1};
    struct pair right = get(graph[idx].right);
    struct pair left = get(graph[idx].left);
    return {max(right)+1, max(left)+1};
}

int main() {
    scanf("%d", &N);
    for(int i=0, a,b;i<N-1;i++) {
        scanf("%d %d", &a, &b);
        if(graph[a].right == 0) graph[a].right = b;
        else graph[a].left = b;
    }
    auto temp = get(1);
    if(abs(temp.first - temp.second) <= 1) printf("yes");
    else printf("no");
    return 0;
}
