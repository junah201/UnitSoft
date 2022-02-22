// 1939. 막대기 (2019)

#include <stdio.h>
#include <stack>

using namespace std;

stack<int> s;
int t[100001];
int i, n;

int main()
{
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }
    s.push(t[--i]);
    for (int j = i - 1; j >= 0; j--)
    {
        if (t[j] > s.top())
            s.push(t[j]);
    }
    printf("%lu", s.size());
    return 0;
}
