//1160. Catalan Number

#include <stdio.h>
#include <stack>

using namespace std;

int N,idx,value,map[100000];

stack<int> s;

int main() {
    scanf("%d", &N);
    for(int i=0;i<N;i++) scanf("%d",&map[i]);
    value = 1;
    for(int i=0;i<N;i++) {
        while(s.empty() || s.top() <map[i]) {
            s.push(value++);
        }
        if(s.top() == map[i]) {
            s.pop();
            idx++;
        }
        else {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
