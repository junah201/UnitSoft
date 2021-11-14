//1148. 소수 구하기(L)

#include <stdio.h>

int n,IDX,CHECK_IDX;
int check_Arr[100]; //횟수
int print_Arr[9000];
int check=1;
int prime(int x) {
    for(int i=2;i*i<=x;i++) {
        if(x%i==0) return 0;
    }
    return 1;
}

int create(int idx) {
    if(idx==IDX) {
        int result=0;
        for(int i=0;i<idx;i++) {
            result*=10;
            result+=print_Arr[i];
        }
        if(prime(result)) {
            check=0;
            printf("%d ",result);
        }
        return 0;
    }
    for(int i=0;i<=9;i++) {
        if(check_Arr[i]) {
            check_Arr[i]--;
            print_Arr[idx]=i;
            create(idx+1);
            check_Arr[i]++;
        }
    }
    return 0;
}

int main() {
    scanf("%d", &n);
    if(n==1) {
        printf("0");
        return 0;
    }
    IDX=0;
    while(n>0) {
        IDX++;
        check_Arr[n%10]++;
        n/=10;
    }
    create(0);
    if(check) printf("0");
    return 0;
}
