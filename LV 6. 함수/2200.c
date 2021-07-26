//2200. [basic] 기초 함수 실습 문제 -20

#include<stdio.h>

int get_int(){
    int value;
    scanf("%d",&value);

    return value;
}

int main(){
    int x = get_int();
    int y = get_int();
    printf("%d + %d = %d\n",x,y,x+y);
    return 0;
}
