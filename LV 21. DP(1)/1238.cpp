// 1238. 내려가기

#include <stdio.h>
#include <algorithm>
using namespace std;

int N;
int max_DP[3];
int max_temp_DP[3];
int min_DP[3];
int min_temp_DP[3];

int main()
{
    scanf("%d", &N);
    for (int i = 0, input[3]; i < N; i++)
    {
        scanf("%d %d %d", &input[0], &input[1], &input[2]);
        max_temp_DP[0] = input[0] + max(max_DP[0], max_DP[1]);
        max_temp_DP[1] = input[1] + max(max_DP[0], max(max_DP[1], max_DP[2]));
        max_temp_DP[2] = input[2] + max(max_DP[1], max_DP[2]);
        for (int j = 0; j < 3; j++)
            max_DP[j] = max_temp_DP[j];

        min_temp_DP[0] = input[0] + min(min_DP[0], min_DP[1]);
        min_temp_DP[1] = input[1] + min(min_DP[0], min(min_DP[1], min_DP[2]));
        min_temp_DP[2] = input[2] + min(min_DP[1], min_DP[2]);
        for (int j = 0; j < 3; j++)
            min_DP[j] = min_temp_DP[j];
    }

    printf("%d %d", max(max_DP[0], max(max_DP[1], max_DP[2])), min(min_DP[0], min(min_DP[1], min_DP[2])));
    return 0;
}