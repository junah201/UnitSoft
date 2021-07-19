#include <stdio.h>

int main(){
    int arr[100];
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int temp_arr[6]={0,};
    for(int i=0;i<N;i++){
        if(arr[i]>0&&arr[i]<60){
            temp_arr[arr[i]/10] +=1;
        }
    }
    for(int i=0;i<6;i++){
        printf("%d\n",temp_arr[i]);
    }
    return 0;
}
