//2361. 마스크 연산

#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;

int N;
int alpha_list[26] = {0,};
char input[9];

int ten(int size) {
    int result=1;
    for(int i=1;i<size;i++) result *= 10;
    return result;
}

int alpha_add(char str[]) {
    int size = strlen(str);
    for(int i=0;i<size;i++) alpha_list[str[i]-'A'] += ten(size-i);
    return 0;
}

int sum() {
    int result = 0;
    int idx = 0;
    for(int i=9;i>=0;i--) result += i*alpha_list[idx++];
    return result;
}

bool compare(int i, int j) {
    return j < i;
}

int main() {
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%s",&input);
        alpha_add(input);
    }
    sort(alpha_list,alpha_list+26,compare);
    printf("%d",sum());
    return 0;
}
