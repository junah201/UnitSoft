#include <stdio.h>

int main(){
    int temp=0;
    int sum=0;
    for(int i=0;i<6;i++){
        scanf("%d",&temp);
        if(temp%2==0){
            sum+=1;
        }
    }
    printf("%d%",sum);
    return 0;
}
