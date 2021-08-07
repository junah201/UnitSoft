//1130. 조합의 수 계산하기

#include <stdio.h>
#include <math.h>

int N,R;
int get(int n,int r){
    if(r==0 || r==n){
        return 1;
    }
    if(r>0 && r<n){
        return get(n-1,r-1) + get(n-1,r);
    }
}

int main(){
    scanf("%d%d",&N,&R);
    printf("%d",get(N,R));
    return 0;
}
