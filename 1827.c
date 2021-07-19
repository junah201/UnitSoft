#include <stdio.h>

int main(){
    int arr[100];
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int pos1,pos2;
    scanf("%d %d",&pos1,&pos2);
    printf("%d %d",arr[pos1-1],arr[pos2-1]);
    return 0;
}
