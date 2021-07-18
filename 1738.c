#include <stdio.h>

int main(){
    int arr[100] = {0,};
    int temp;
    int i=0;
    while(1){
        scanf("%d",&temp);
        if(temp==99){
            break;
        }
        arr[i]=temp;
        i=i+1;
    }
    for(i=i-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
