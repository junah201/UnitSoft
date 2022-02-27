// 1691. 한번만 나오숫자

#include <bits/stdc++.h>
using namespace std;

int N, cnt, tmp;
int num[11];

int main()
{
    scanf("%d", &N);
    while (N)
    {
        num[N % 10]++;
        N /= 10;
        cnt++;
    }
    for (int i = 1; i <= cnt; i++)
        if (num[i] == 1)
            tmp += num[i];
    if (tmp == cnt)
        printf("yes");
    else
        printf("no");
    return 0;
}