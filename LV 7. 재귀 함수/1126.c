//1126. 자연수 나누기

#include <stdio.h>

int n;

int int_sum(int arr[],int idx,int sum){
    if(idx<0){
        return 0;
    }
    if(idx==0){
        return sum+arr[0];
    }

    sum+=arr[idx];
    int_sum(arr,idx-1,sum);
}

int get(int arr[], int su, int idx){
    if(idx > n ){
        return 0;
    }

    int sum = int_sum(arr,idx-1,0);

    if(sum > n) {
        return 0;
    }

    if(sum == n){
        for(int i=0; i<idx; i++){
            if(i==idx-1){
                printf("%d\n",arr[i]);
            }else{
                printf("%d+",arr[i]);
            }
        }
    }else{
        for(int i=su; i>0; i--){
            arr[idx] = i;
            get(arr, i, idx+1);
        }
    }
}

int main() {
    int arr[200];
    scanf("%d",&n);
    get(arr, n-1, 0);

    return 0;
}
