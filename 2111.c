#include <stdio.h>

int main(){
    int arr[8]={0,};
    int N;
    for(int i=0;i<8;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<8;i+=2){
        printf("%3d%3d\n",arr[i],arr[i+1]);
    }
    for(int i=0;i<8;i+=2){
        printf("%3d",arr[i]);
    }
    printf("\n");
    for(int i=1;i<9;i+=2){
        printf("%3d",arr[i]);
    }

    return 0;
}
