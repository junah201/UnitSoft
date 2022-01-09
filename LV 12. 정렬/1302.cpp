//1302. GCD정렬

#include <stdio.h>
#include <algorithm>

int max(int a,int b) {
    if(a>b) return a;
    return b;
}

int min(int a,int b) {
    if(a<b) return a;
    return b;
}

int gcd(int a,int b) {
    if(b==0) return a;
    return gcd(b,a%b);
}

struct a
{
    int a;
    int b;
    int gcd=0;
};


int N;
struct a A[100000];

int main() {
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d %d",&A[i].a,&A[i].b);
        A[i].gcd=gcd(max(A[i].a,A[i].b),min(A[i].a,A[i].b));
    }
    std::sort(A,A+N,[](struct a a,struct a b){
        if(a.gcd==b.gcd) {
            if(a.a==b.a) {
                if(a.b<b.b) return 1;
                else return 0;
            }
            else if(a.a<b.a) return 1;
            else return 0;
        }
        else if(a.gcd<b.gcd) return 1;
        else return 0;
    });
    for(int i=0;i<N;i++) {
        printf("%d %d\n",A[i].a,A[i].b,A[i].gcd);
    }
    return 0;
}

