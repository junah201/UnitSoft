// 1166. 스카이라인 쉬운거

#include <stdio.h>
#include <stack>
#include <algorithm>

using namespace std;

struct xy
{
    int x;
    int y;
};

xy pos[10000001];

stack<int> a;
int n, cnt;

bool cmp(const xy &a, const xy &b)
{
    return a.x < b.x;
}

int main()
{
    //입력
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &pos[i].x, &pos[i].y);
    }
    //정렬
    sort(pos, pos + n, cmp);
    //카운트
    cnt = 0;
    a.push(0);
    for (int i = 0; i < n; i++)
    {
        while (!a.empty() && a.top() > pos[i].y)
        {
            a.pop();
        }
        if (!a.empty() && a.top() == pos[i].y)
        {
            a.push(pos[i].y);
        }
        else
        {
            // empty or a.top()<pos[i].y
            a.push(pos[i].y);
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}
