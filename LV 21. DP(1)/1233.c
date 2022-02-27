// 1233. 2 x n 타일링2

#include <stdio.h>

int N;
int DP[1002];

int get(int idx) {
    if (!DP[idx]) DP[idx] = (get(idx - 1) + 2 * get(idx - 2)) % 10007;
    return DP[idx] % 10007;
}

int main() {
    scanf("%d", &N);
    DP[1] = 1;
    DP[2] = 3;
    printf("%d", get(N) % 10007);
    return 0;
}