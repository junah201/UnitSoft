#include <stdio.h>

int main(){
    char arr[4]={'A','B','C','D'};

    for(int i=0;i<4;i++){
        printf("a[%d] = %c %d\n",i,arr[i],arr[i]);
    }

    return 0;
}
