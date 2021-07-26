//2199. [basic] 기초 함수 실습 문제 -19

#include<stdio.h>

int sum(int x,int y){
    int i,hap=0;
    for(i=x; i<=y;  i++){
        hap+=i;
    }
    return hap;
}

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    printf("%d ~ %d sum = %d" ,n,m,sum(n,m));
    return 0;
}
