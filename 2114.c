#include <stdio.h>

int main(){
    int n,m,k;
    scanf("%d %d",&n,&m);
    int arr[100];
    int sum=0;
    for(int i=0;i<n*m;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n*m;i++){
        if(arr[i]%k==0){
            sum+=1;
        }
    }
    printf("%d%",sum);
    return 0;
}
