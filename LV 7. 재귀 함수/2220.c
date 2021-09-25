//2220. [basic] 재귀함수 연습문제 2

#include <stdio.h>

int print(int N) {
    if(N==1) {
        printf("1");
    }else{
        print(N-1);
        printf("%d",N);
        print(N-1);
    }
    return 0;
}

int main() {
    int N; scanf("%d",&N);
    print(N);
    return 0;
}
