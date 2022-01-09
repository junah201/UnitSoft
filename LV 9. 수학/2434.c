//2434. 동물원(이었던것)

#include <stdio.h>

long long int N,cnt=0;
long long int num=0,temp;
int map[60];

long long int get(int n) {
    long long int result=1;
    for(int i=0;i<n;i++) {
        result*=2;
    }
    return result;
}

int main() {
    scanf("%d", &N);
    for(int i=0;i<N;i++) {
        scanf(" %c",&map[i]);
        map[i]=!(map[i]-79);
    }
    for(int i=0;i<N;i++) {
        if(map[i]) {
            cnt+=get(N-i-1);
        }
    }
    printf("%lld",cnt);
}
