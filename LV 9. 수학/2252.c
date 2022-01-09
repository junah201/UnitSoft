//2252. 잘못 구현한 에라토스테네스의 체 (Small)

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int cnt=0;
    for(int i=1 ; i<=n ; i++) {
        for(int j=1 ; j<=n ; j+=i) {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
