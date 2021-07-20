#include <stdio.h>

int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<arr[i]/10;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
