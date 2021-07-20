//1076. 이진수를 표현하여 보자

#include <stdio.h>
#include <string.h>

int main()
{

    int Arr[40] = {0,};
    int N;

    scanf("%d",&N);

    Arr[0] = 1;
    Arr[1] = 1;

    for(int i=2;i<=N+1;i++){
        Arr[i] = Arr[i-1] + Arr[i-2];
    }
    printf("%d",Arr[N+1]);

    return 0;
}
