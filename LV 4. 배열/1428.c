#include <stdio.h>

int main(){
    int arr[100] = {0,};
    int N;

    scanf("%d",&N);

    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    for (int i = 0; i<N; i++){
        for (int j = 0; j < N - 1; j++){
            if (arr[j] > arr[j + 1]){                               
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;  
            }
        }
    }

    printf("%d",arr[N-2]);

    return 0;
}
