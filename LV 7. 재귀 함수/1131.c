//1131. 애커먼 함수

#include <stdio.h>
#include <stdlib.h>

int A(int m, int n)
{
    if(m==0){
        return n+1;
    }else if(m!=0,n==0){
        return A(m-1,1);
    }
    return A(m-1,A(m,n-1));
}

int main()
{
    int a, b;
    scanf("%d %d",&a,&b);

    printf("%d",A(a,b));
    return 0;
}
