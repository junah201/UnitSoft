//1160. Catalan Number

#include <stdio.h>
#include <stack>

using namespace std;

int n,map[100];
stack<int> s;
int start;
int e;

int check() {
    for(int i=1;i<=n;i++) {
        if(s.top()!=i) return 0;
        s.pop();
    }
    return 1;
}

int main() {
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&map[i]);
    }
    start=n-1;
    e=n-1;
    while(1) {
        //printf("s:%d,e:%d\n",start,e);
        if(start<0) {
            break;
        }
        if(map[start-1]-1!=map[e]) {
            for(int i=start;i<=e;i++) {
                s.push(map[i]);
            }
            e=start-1;
            start=start-1;
            continue;
        }
        start--;
    }
    if(check()) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
