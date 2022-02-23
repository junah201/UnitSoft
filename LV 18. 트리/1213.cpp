// 1213. subsequence

#include <stdio.h>

int N, S;
int map[100002];

int bs()
{
    int ans = 987654321;
    int low = 0;
    int high = 1;
    int sum = map[0];
    while (high <= N)
    {
        if (sum < S)
        {
            sum += map[high++];
        }
        else if (sum >= S)
        {
            if (ans > high - low)
                ans = high - low;
            sum -= map[low++];
        }
    }
    if (ans == 987654321)
        return 0;
    return ans;
}

int main()
{
    scanf("%d %d", &N, &S);
    for (int i = 0; i < N; i++)
        scanf("%d", &map[i]);
    printf("%d", bs());
    return 0;
}