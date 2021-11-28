//1159. 스택의 구현

#include <stdio.h>
    
int N,size,idx;
char cmd[7];
int x;
int s[100]; 

int main() {
    scanf("%d", &N);
    for(int i=0;i<N;i++) {
        scanf(" %s",cmd);
        //create
        if(cmd[0]=='c') {
            scanf("%d",&x);
            size=x;
            idx=0;   
        }
        //pop
        else if(cmd[0]=='p'&&cmd[1]=='o') {
            if(idx==0) printf("underflow\n");
            else {
                s[idx-1]=0;
                idx--;
                for(int i=0;i<size;i++) printf("%d ",s[i]);
                printf("\n");
            }
        }
        //push
        else if(cmd[0]=='p'&&cmd[1]=='u') {
            scanf("%d",&x);
            if(idx==size) printf("overflow\n");
            else {
                s[idx]=x;
                idx++;
                for(int i=0;i<size;i++) printf("%d ",s[i]);
                printf("\n");
            }
        }
        //double
        else if(cmd[0]=='d') {
            size*=2;
            if(size>100) size=100;
        }
    }
    return 0;
}
