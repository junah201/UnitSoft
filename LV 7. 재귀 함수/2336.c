//2336. 우리 걷던 오목교역 삼...

#include <stdio.h>

int N;
int cnt=0;

int get(int num,int idx){
    if(idx==N){
        if(num%3==0){
            cnt+=1;
        }
        return 0;
    }
    if(idx!=0){
        get(num*10+0,idx+1);
    }
    get(num*10+1,idx+1);
    get(num*10+2,idx+1);
    return 0;
}

int main(){
    scanf("%d",&N);
    get(0,0);
    printf("%d",cnt);
}
