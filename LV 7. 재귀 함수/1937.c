//1937. 숫자 만들기

#include <stdio.h>

int N;
int input_Arr[15] = {0,};
int print_Arr[16384] = {0,};
int print_idx = 0;

int check(int idx,int value){
    if(idx == print_idx) return 1;
    if(print_Arr[idx]==value) return 0;
    return check(idx+1,value);
}

int get(int idx,int result) {
    if(idx==N) {
        if(check(0,result)) {
            print_Arr[print_idx] = result;
            print_idx += 1;
        }
        return 0;
    }

    get(idx+1,result+input_Arr[idx]);
    get(idx+1,result-input_Arr[idx]);

    return 0;
}

int main(){
    scanf("%d",&N);

    for(int i=0;i<N;i++) scanf("%d",&input_Arr[i]);
    
    get(1,input_Arr[0]);
    printf("%d",print_idx);

    return 0;
}
