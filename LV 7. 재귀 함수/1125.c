/1125. 십진수를 이진수로 바꾸기

#include <stdio.h>

int get(int x){
    if(x == 0 || x == 1){
        printf("%d",x);
    }else{
        get(x/2);
        printf("%d",x%2);
    }
    return 0;
}

int main(){
    int N;
    scanf("%d", &N);
    get(N);
    return 0;
}
