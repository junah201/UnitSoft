// 2452. RBCRBC 1

#include <stdio.h>
#include <stack>

using namespace std;

int n, s[1000000];

int get(int idx)
{
    for (int i = idx + 1; i < n; i++)
    {
        if (s[idx] < s[i])
            return s[i];
    }
    return -1;
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }
    for (int i = 0; i < n; i++)
    {

        printf("%d ", get(i));
    }
}
