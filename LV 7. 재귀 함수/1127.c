//1127. 부분집합 모두 출력하기

#include <stdio.h>

int N;
char arr[10];
int get(int idx,int print_idx){
    if(idx>N) return 0;
    
    if(idx!=0){
        for(int i=1;i<print_idx;i++){
            printf("%c",arr[i]);
        }
        printf("\n");
    }

    for(int i=idx+1;i<=N;i++){
        arr[print_idx] = i+96;
        get(i,print_idx+1);
    }
}

int main(){ 
    scanf("%d",&N);
    get(0,1);
    return 0;
}
