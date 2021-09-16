//1132. 올바른 괄호 사용

include <stdio.h>

int N;
char print_Arr[20];

int open = 0;
int close = 0;

int get(int idx){
    if(idx==2*N) {
        printf("%s\n",print_Arr);
        return 0;
    }
    if(open<N){
        print_Arr[idx] = '(';
        open+=1;
        get(idx+1);
        open-=1;
    }
    if(close<open){
        print_Arr[idx] = ')';
        close+=1;
        get(idx+1);
        close-=1;
    }
    return 0;
}

int main() {
    scanf("%d",&N);
    get(0);
    return 0;
}
