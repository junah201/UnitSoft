//1168. 원형 큐의 구현

#include <stdio.h>

int K[200],x,n,size,start,end;
char cmd[10];

int main() {
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf(" %s",cmd);
       // printf("%s : %d\n",cmd,end);
        //for(int j=0;j<size;j++) printf("%d ",K[j]);
        //printf("===\n");
        if(cmd[0]=='c') {
            scanf("%d",&size);
        }
        else if(cmd[0]=='r') {
            if(K[start]==0) printf("underflow\n");
            else {
                K[start++]=0;
                if(start==size) start=0;
                for(int j=0;j<size;j++) printf("%d ",K[j]);
                printf("\n");
            }
        }
        else if(cmd[0]=='i') {
            scanf("%d",&x);
            if(K[end]!=0) printf("overflow\n");
            else {
                K[end++]=x;
                if(end==size) end=0;
                for(int j=0;j<size;j++) printf("%d ",K[j]);
                printf("\n");
            }
        }
    }
    return 0;
}
