// 1165. 알파벳 제거

#include <stdio.h>
#include <stack>
#include <string.h>

using namespace std;

stack<char> s;
char str[1000001];

int main()
{
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (s.empty())
        {
            s.push(str[i]);
        }
        else if (s.top() == str[i])
        {
            s.pop();
        }
        else
        {
            s.push(str[i]);
        }
    }
    if (s.empty())
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}
