//2355. 선택 정렬 (Selection Sort)

#include <stdio.h>

int N,min,temp;
int map[100];

int main() {
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d",&map[i]);
    }
    //정렬
    for(int i=0;i<N;i++) {
        min=i;
        for(int j=i+1;j<N;j++) {
            if(map[min]>map[j]) {
                min=j;
            }
        }
        temp=map[i];
        map[i]=map[min];
        map[min]=temp;
        //print map
        for(int j=0;j<N;j++) {
            printf("%d ",map[j]);
        }
        printf("\n");
    }
    return 0;
}
