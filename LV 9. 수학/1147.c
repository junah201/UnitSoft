//1147. 소수 구하기(S)

#include <stdio.h>

int check[2000000];

int main() {
    check[0]=1;
    check[1]=1;
    for(int i=2;i<2000000;i++) {
        if(check[i]==0) {
            for(int j=i+i;j<2000000;j+=i) {
                check[j]=1;
            }
        }
    }
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=0;i<2000000;i++) {
        if(check[i]==0) {
            cnt++;
        }
        if(cnt==n) {
            printf("%d\n",i);
            return 0;
        }
    }
    return 0;
}
