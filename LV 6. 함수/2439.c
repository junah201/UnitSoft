//2439. [basic] 기초 함수 실습 문제 -23

#include<stdio.h>

double FtoC(double f){
    double temp_c =f;
    temp_c-=32;
    temp_c = temp_c*5/9;

    return temp_c;
}

int main(){
    double f,c;
    scanf("%lf",&f);
    c = FtoC(f);
    printf("%.2lf",c);
    return 0;
}
