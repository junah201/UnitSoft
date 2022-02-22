// 1768. 괄호2

#include <stdio.h>
#include <stack>
#include <string.h>

using namespace std;

stack<int> s; //소괄호 대괄호
char t[1000001];
int n, len;

int check()
{
    scanf("%s", t);
    len = strlen(t);
    for (int i = 0; i < len; i++)
    {
        if (t[i] == '(')
            s.push(0);
        else if (t[i] == ')')
        {
            if (s.empty())
                return 0;
            if (s.top() != 0)
                return 0;
            s.pop();
        }
        else if (t[i] == '[')
            s.push(1);
        else if (t[i] == ']')
        {
            if (s.empty())
                return 0;
            if (s.top() != 1)
                return 0;
            s.pop();
        }
    }
    if (s.empty())
        return 1;
    return 0;
}

int main()
{
    if (check())
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
