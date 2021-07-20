//1081. counting_black

#include <stdio.h>
#include <string.h>

int main()
{
    int Arr[100][100] = {0,};
    char input_string[5];
    char BLACK[5] = {'B','L','A','C','K'};
    int N;
    scanf("%d",&N);
    int x,y,L;
    for(int i=0;i<N;i++){
        scanf("%s %d %d %d",&input_string,&x,&y,&L);
        if(strcmp(input_string,"BLACK")==0){
            for(int k=x-1;k<x+L-1;k++){
                for(int j=y-1;j<y+L-1;j++){
                    Arr[k][j] = 1;
                }
            }
        }else if(strcmp(input_string,"WHITE")==0){
            for(int k=x-1;k<x+L-1;k++){
                for(int j=y-1;j<y+L-1;j++){
                    Arr[k][j] = 0;
                }
            }
        }else if(strcmp(input_string,"TEST")==0){
            int sum=1;
            for(int k=x-1;k<x+L-1;k++){
                for(int j=y-1;j<y+L-1;j++){
                    if(Arr[k][j]==1){
                        sum+=1;
                    }
                }
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
