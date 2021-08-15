//1936. 이진 문자열

#include <stdio.h>
#include <math.h>
#include <string.h>

int n;
int sum=0;

int check_0(int arr[],int idx){
    if(idx==n-2){
        return 0;
    }else{
        if(arr[idx]+arr[idx+1]+arr[idx+2]==0){
            return 1;
        }else{
            return check_0(arr,idx+1);
        }
    }
}

int check_1(int arr[],int idx){
    if(idx==n-2){
        return 0;
    }else{
        if(arr[idx]+arr[idx+1]+arr[idx+2]==3){
            return 1;
        }else{
            return check_1(arr,idx+1);
        }
    }
}


int get(int arr[], int idx){
    if(idx==n){
        if(check_1(arr,0)==0 && check_0(arr,0)==0){
            sum= sum%10007 +1;
        }
        return 0;
    }else{
        arr[idx] = 1;
        get(arr, idx+1);
        arr[idx] = 0;
        get(arr, idx+1);
    }
    return 0;
}

int main(){
    int arr[50];
    scanf("%d",&n);
    if(n>2){
        get(arr, 0);
        printf("%d",sum%10007);
    }else if(n==1){
        printf("2");
    }else if(n==2) {
        printf("4");
    }

    return 0;
}
