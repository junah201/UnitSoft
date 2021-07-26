//2421. [basic] 기초 함수 실습 문제 -21

#include<stdio.h>

int get_int(){
    int value;
    scanf("%d",&value);

    return value;
}

int get_max(int x, int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}

int main(){
    int x = get_int();
    int y = get_int();
    printf("%d\n",get_max(x,y));
    return 0;
}
