// 1205. 트리의 높이와 너비 (고1)

#include <stdio.h>

int N, a, b, c;
int ans1 = -1, ans2 = -1;
int temp = 1;

struct Node
{
    int x;
    int y;
    int parents;
    int child_l;
    int child_r;
} graph[10002];

int get_root(int idx)
{
    if (graph[idx].parents == 0)
        return idx;
    return get_root(graph[idx].parents);
}

void get_x(int idx)
{
    if (graph[idx].child_l != -1 && graph[idx].child_l != 0)
        get_x(graph[idx].child_l);
    graph[idx].x = temp++;
    if (graph[idx].child_r != -1 && graph[idx].child_r != 0)
        get_x(graph[idx].child_r);
}

void get_y(int idx, int stack)
{
    graph[idx].y = stack;
    if (graph[idx].child_l != -1 && graph[idx].child_l != 0)
        get_y(graph[idx].child_l, stack + 1);
    if (graph[idx].child_r != -1 && graph[idx].child_r != 0)
        get_y(graph[idx].child_r, stack + 1);
}

int main()
{
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        graph[a].child_l = b;
        graph[b].parents = a;
        graph[a].child_r = c;
        graph[c].parents = a;
    }
    int root = get_root(1);
    get_x(root);
    get_y(root, 1);
    for (int i = 1;; i++)
    {
        int min = 987654321, max = -1;
        for (int j = 1; j <= N; j++)
        {
            if (graph[j].y == i)
            {
                if (max < graph[j].x)
                    max = graph[j].x;
                if (min > graph[j].x)
                    min = graph[j].x;
            }
        }
        if (max == -1)
            break;
        if (ans2 < max - min + 1)
        {
            ans1 = i;
            ans2 = max - min + 1;
        }
    }
    printf("%d %d", ans1, ans2);
    return 0;
}