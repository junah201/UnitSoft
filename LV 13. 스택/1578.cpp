// 1578. 괄호

#include <stdio.h>
#include <stack>
#include <string.h>

using namespace std;


char t[51];
int n,len;

int check() {
    stack<int> s;
    scanf("%s",t);
    len=strlen(t);
    for(int i=0;i<len;i++) {
        if(t[i]=='(') s.push(i);   
        else {
            if(s.empty()) return 0;
            s.pop();
        }
    }
    if(s.empty()) return 1;
    return 0;
}

int main() {
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        if(check()) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
            sum *= str[a.top() - 1] - '0';
            num[a.top() - 1] = sum;
            a.pop();
        }
    }
    sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += num[i];
    }
    printf("%d", sum);
    return 0;
}
