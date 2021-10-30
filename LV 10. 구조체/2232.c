//2232. [basic] 구조체 실습문제-2

#include<stdio.h>

struct circle{
    int  x, y; //중심의 위치
    double r; //반지름
};

int main()
{
    struct circle c1;
    scanf("%d %d\n%lf",&c1.x,&c1.y,&c1.r);
    printf("(%d,%d)\n%.2lf",c1.x,c1.y,c1.r*c1.r*3.14);
    return 0;
}
