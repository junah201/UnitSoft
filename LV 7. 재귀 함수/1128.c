//1128. 순열 구하기

#include <stdio.h>

int N,R;

char Arr[10];
char Orgin_check_Arr[10] = {'A','B','C','D','E','F','G','H','I','J'};
int check_Arr[10] = {0,};

void get(int Arr_idx){
    if(Arr_idx==R){
        printf("%s\n",Arr);
        return;
    }
    
    for(int i=0;i<N;i++){
        if(check_Arr[i]!=1) {
            Arr[Arr_idx] = 65+i;
            check_Arr[i] = 1;
            get(Arr_idx+1);
            check_Arr[i] = 0;
        }
    }
    return;
}

int main(){
    scanf("%d %d",&N,&R);

    get(0);

    return 0;
}
