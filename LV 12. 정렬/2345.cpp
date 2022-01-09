//2345. 보고서 수난시대

#include <stdio.h>
#include <algorithm>

struct A
{
    char key;
    int board;
    int time;
};

struct A a[1000];
int N,M;

int main() {
    scanf("%d %d",&N,&M);
    for(int i=0;i<M;i++) scanf("%d %d %c",&a[i].board,&a[i].time,&a[i].key);
    std::sort(a,a+M,[](struct A a, struct A b){
        if(a.time==b.time) {
            if(a.board<b.board) return 1;
            return 0;
        }
        if(a.time<b.time) return 1;
        return 0;
    });
    for(int i=0;i<M;i++) {
        printf("%c",a[i].key);
    }
    return 0;
}
