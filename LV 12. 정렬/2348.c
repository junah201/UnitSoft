//2348. 버블 정렬 (Bubble Sort)

#include <stdio.h>

int N,temp;
int map[100];

int main() {
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &map[i]);
    }
    //버블 정렬
    for (int i=0; i<N; i++) {
        for (int j=0; j<N-1; j++) {
            if (map[j]>map[j+1]) {
                temp = map[j];
                map[j] = map[j+1];
                map[j+1] = temp;
                for(int k=0;k<N;k++) {
                    printf("%d ", map[k]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
