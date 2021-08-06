//2222. [basic] 재귀함수 연습문제 4

#include <stdio.h>

unsigned long long int arr[100] = {0,};
unsigned long long int get(int i){
    if(i==1 || i == 2){
        return arr[i-1] = 1;
    }
    if(arr[i-1]!=0){
        return arr[i-1];
    }
    return arr[i-1] = (get(i-1) +get(i-2))%1000000007;
}

int main(){
    int N;
    scanf("%d",&N);
    printf("%llu",get(N));
}
