//1151. fraction

#include <stdio.h>

struct f
{
    int a1, a2; //a1 : 분자, a2 : 분모
    float value;
};
struct f a[10000];
struct f temp;
int N;
int idx = 2;

int check(int a,int b){
    //a가 분자, b가 분모
    if(a<=1) return 1;
    for(int i=2;i<=a;i++) {
        if(a%i==0 && b%i==0) return 0;
    }
    return 1;
}

int main() {
    a[0].a1=0;
    a[0].a2=1;
    a[0].value=0;
    a[1].a1=1;
    a[1].a2=1;
    a[1].value=1;
    scanf("%d",&N);
    //i가 분자, j가 분모
    for(int i=1;i<=N;i++) {
        for(int j=1;j<=N;j++) {
            if(check(i,j)&&i<j) {
                a[idx].a1= i;
                a[idx].a2= j;
                a[idx++].value=(1.0)*i/j;
            }
        }
    }
    //정렬
    for(int i=0;i<idx;i++) {
        for(int j=0;j<idx-1-i;j++) {
            /*
            for(int x=0;x<idx;x++) {
                printf("%d/%d  ",a[x].a1,a[x].a2);
            }
            printf("\n");
            */
            if(a[j].value>a[j+1].value) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    //출력
    for(int i=0;i<idx;i++) {
        printf("%d/%d\n",a[i].a1,a[i].a2);
    }
    return 0;
}
