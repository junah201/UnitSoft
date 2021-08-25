//1129. 조합 구하기

#include <stdio.h>

int N, R;
char arr[20];
int get(int idx,int add_idx){
    if(idx==R){
        printf("%s",arr);
        printf("\n");
        return 0;
    }

    for(int i=add_idx;i<N;i++){
        arr[idx] = 65 + i;
        get(idx+1,i+1);
    }
    return 0;
}

int main() {
    scanf("%d %d",&N,&R);
    get(0,0);
    return 0;
}
