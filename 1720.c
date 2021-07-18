#include <stdio.h>

int main(){
    int arr[10];
    int temp;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<10;i++){
        printf("%d %d\n",i+1,arr[i]);

    }
    return 0;
}
