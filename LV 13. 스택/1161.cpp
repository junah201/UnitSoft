// 1161. 괄호 맞추기

#include <stdio.h>
#include <stack>
#include <string.h>

using namespace std;

stack<int> s;

char str[101];
int pri[101],len,num;

int main() {
    scanf("%s", str);
    len = strlen(str);
    num = 1;
    for(int i=0;i<len;i++) {
        if(str[i]=='(') {
            s.push(i);
        }
        else if(str[i]==')') {
            if(s.empty()) {
                printf("WRONG EXPRESSION");
                return 0;
            }
            pri[i]=num;
            pri[s.top()]=num++;
            s.pop();
        } 
    }
    if(!(s.empty())) {
        printf("WRONG EXPRESSION");
        return 0;
    }
    for(int i=0;i<len;i++) {
        printf("%d ",pri[i]);
    }
    return 0;
}
