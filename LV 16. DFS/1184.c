//1184. 오른편 절단 가능 소수

#include <stdio.h>

int N,cnt;

int check(int x) {
    if(x<2) return 0;
    for(int i=2;i*i<=x;i++) {
        if(x%i==0) return 0;
    }
    return 1;
}

int get(int idx,int value) {
    if(idx==N) {
        printf("%d\n",value);
        cnt++;
        return 0;
    }
    for(int i=value*10;i<(value+1)*10;i++) {
        if(check(i)) get(idx+1,i);
    }
    return 0;
}

int main() {
    scanf("%d",&N);
    get(0,0);
    printf("%d",cnt);
    return 0;
}
