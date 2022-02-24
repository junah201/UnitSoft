// 2538. [이진트리] 크리스마스 트리의 조건 - 2

#include <stdio.h>

struct Node {
    int left;
    int right;
} graph[10002];

int N;
int ans = 1;

void get(int left_node, int right_node) {
    if(!ans) return;
    if(graph[left_node].left && graph[left_node].right && graph[right_node].left && graph[right_node].right) {
        get(graph[left_node].left, graph[right_node].right);
        get(graph[left_node].right, graph[right_node].left);
    }
    else {
        if(!!graph[left_node].left != !!graph[right_node].right) ans = 0;
        if(!!graph[left_node].right != !!graph[right_node].left) ans = 0;
    }
}

int main() {
    scanf("%d", &N);
    for(int i=1, a, b;i<=N;i++) {
        scanf("%d %d", &a, &b);
        graph[i].left = a;
        graph[i].right = b;
    }
    get(1,1);
    if(ans) printf("yes");
    else printf("no");
    return 0;
}
