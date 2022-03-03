// 2340. 우리 걷던 대치역 삼...

#include <bits/stdc++.h>
using namespace std;

int N;
long long DP[33335][3];

long long get(int idx, int cnt)
{
    if (idx == 1)
        return DP[idx][cnt];
    if (!DP[idx][cnt])
        DP[idx][cnt] = (get(idx - 1, 0) + get(idx - 1, 1) + get(idx - 1, 2)) % 1000000009;
    return DP[idx][cnt];
}

int main()
{
    DP[1][0] = 0;
    DP[1][1] = 1;
    DP[1][2] = 1;
    scanf("%d", &N);
    printf("%lld", get(N, 0));
    return 0;
}