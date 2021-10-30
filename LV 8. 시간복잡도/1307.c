//1307. 합이 k인 두 수 찾기

#include <stdio.h>

#define get_max(a,b)  (((a) > (b)) ? (a) : (b))
#define get_min(a,b)  (((a) < (b)) ? (a) : (b))

int n,k;
int input[50000]={0,};
int cut[300000]={0,};
int min=100001, max=-100001; //최대값

int main() {
    scanf(" %d",&n);
    for(int i=0;i<n;i++) {
        scanf(" %d",&input[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n;i++) {
        if(cut[k-input[i]+100000]!=0) {
            cut[input[i]+100000] -= 1;
            cut[k-input[i]+100000] -= 1;
            if(get_min(input[i],k-input[i])<min) {
                min=get_min(input[i],k-input[i]);
                max=get_max(input[i],k-input[i]);
            }
        }
        cut[input[i]+100000] += 1;
    }
    if(min==100001&&max==-100001) printf("0 0\n");
    else printf("%d %d",min,max);
}
