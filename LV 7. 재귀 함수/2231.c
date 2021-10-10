//2231. [basic] 재귀함수 연습문제 12 (hanoi 1)

#include <stdio.h>
#include <math.h>

int N;

int get(int num,char from,char by,char to) {
    if(num==0) return 0;
    get(num-1,from,to,by);
    printf("move disk %d %c->%c\n",num,from,to);
    get(num-1,by,from,to);
    return 0;
}

int main() {
    scanf("%d",&N);
    printf("7\n");
    get(N,'A','B','C');
    return 0;
}
