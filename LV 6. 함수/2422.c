//2422. [basic] 기초 함수 실습 문제 -22

#include<stdio.h>

int power(int x,int y){
    int result = 1;
    for(int i=0;i<y;i++){
        result *= x;
    }
    return result;
}

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d^%d=%d\n",x,y,power(x,y));
    return 0;
}
