//1120. rectangle crash

#include <stdio.h>

int get(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2){
    if(x1>x2+w2||x1+w1<x2||y1<y2-h2||y1-h1>y2){
        printf("false");
        return 1;
    }
    printf("true");
    return 0;
}

int main(){
    int x1,y1,w1,h1,x2,y2,w2,h2;
    scanf("%d %d %d %d %d %d %d %d",&x1,&y1,&w1,&h1,&x2,&y2,&w2,&h2);

    get(x1,y1,w1,h1,x2,y2,w2,h2);

    return 0;
}
