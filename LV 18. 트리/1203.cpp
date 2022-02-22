// 1203. min 힙

#include <stdio.h>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int T, N, A;

int main()
{
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &N);
        if (N == 0)
        {
            scanf("%d", &A);
            pq.push(A);
        }
        else if (N == 1)
        {
            if (pq.empty())
                printf("-1\n");
            else
            {
                printf("%d\n", pq.top());
                pq.pop();
            }
        }
        else if (N == 2)
        {
            if (pq.empty())
                printf("-1\n");
            else
            {
                printf("%d\n", pq.top());
            }
        }
    }
    return 0;
}