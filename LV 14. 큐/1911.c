//1911. 큐의 구현

#include <stdio.h>

int N,A[10000],X,idx;
char cmd[10];

int main() {
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%s",&cmd);
        //printf("%s %d\n",cmd,idx);
        if(cmd[0]=='e') {
            if(idx==0) printf("1\n");
            else printf("0\n");
        }
        else if(cmd[0]=='b') {
            if(idx==0) printf("-1\n");
            else printf("%d\n",A[idx-1]);
        }
        else if(cmd[0]=='f') {
            if(idx==0) printf("-1\n");
            else printf("%d\n",A[0]);
        }
        else if(cmd[0]=='s') {
            printf("%d\n",idx);
        }
        else if(cmd[0]=='p' && cmd[1]=='u') {
            scanf("%d",&X);
            A[idx++]=X;
        }
        else if(cmd[0]=='p' && cmd[1]=='o') {
            if(idx==0) printf("-1\n");
            else {
                printf("%d\n",A[0]);
                for(int i=0;i<idx;i++) {
                    A[i] = A[i+1];
                }
                idx--;
            }
        }
    }
    return 0;
}
