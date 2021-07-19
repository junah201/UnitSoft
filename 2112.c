#include <stdio.h>

int main(){
    int arr[6]={0,};
    int temp=0;
    int sum=0;
    for(int i=0;i<6;i++){
        scanf("%d",&temp);
        arr[i] =temp;
        sum+=temp;
    }

    for(int i=0;i<6;i+=3){
        printf("%3d%3d%3d\n",arr[i],arr[i+1],arr[i+2]);
    }
    printf("%d%",sum);

    return 0;
}
