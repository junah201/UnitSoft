//1158. 과목 점수로 정렬하기

#include <stdio.h>
#include <algorithm>

int N;
struct A
{
    char name[31];
    int num;
};
struct A a[10000];

int main() {
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%s %d",&a[i].name,&a[i].num);
    }
    std::sort(a,a+N,[](struct A a, struct A b){
        if(a.num<b.num) return 1;
        else if(a.num>b.num) return 0;
        for(int i=0;i<31;i++) {
            if(a.name[i]<b.name[i]) return 1;
            else if(a.name[i]>b.name[i]) return 0;
        }
        return 0;
    });
    for(int i=0;i<N;i++) {
        printf("%s\n",a[i].name);
    }
    return 0;
}
