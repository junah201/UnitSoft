#include <stdio.h>

int main(){
    float arr[100];
    int N;
    scanf("%d",&N);
    float sum=0;
    float temp;
    for(int i=0;i<N;i++){
        scanf("%f",&temp);
        sum+=temp;
    }
    printf("%.1f",sum/N);
    return 0;
}
