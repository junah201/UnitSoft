#include <stdio.h>

int main(){
    int Arr[10] = {0,};
    int cont = 0;
    
    for(int i = 0;i<10;i++){
        scanf("%d",&Arr[i]);
    }
    
    for(int i = 0; i<10;i++){
        for(int j=0;j<10;j++){
            if(Arr[i]==Arr[j]){
                cont+=1;
            }
        }
        if(cont==1){
            printf("%d ",Arr[i]);
        }
        cont=0;
    }
    return 0;
}
