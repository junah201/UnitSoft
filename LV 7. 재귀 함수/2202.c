//2202. [basic] 재귀함수 실습문제 18

#include <stdio.h>

int count(int n){
    if(n==1 || n==2){
        return 1;
    }
    return count(n-1) + count(n-2);
}

int main(){
    int N;
    scanf("%d",&N);
    int arr[20] = {0,};
    arr[0] = 1;
    arr[1] = 1;
    printf("%d",count(N));
    return 0;
}
