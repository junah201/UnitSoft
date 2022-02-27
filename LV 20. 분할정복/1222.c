// 1222. 네모별찍기

#include <stdio.h>

int N;
int map[2187 + 1][2187 + 1];

void get(int x, int y, int stack) {
    if(stack == 1) {
        map[y][x] = 1;
        return ;
    }
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(i == 1 && j == 1) continue;
            get(x + i * stack / 3, y + j * stack / 3, stack / 3);
        }
    }
}

int main() {
    scanf("%d", &N);
    get(0,0,N);
    for(int y=0;y<N;y++) {
        for(int x=0;x<N;x++) {
            if(map[y][x]) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}