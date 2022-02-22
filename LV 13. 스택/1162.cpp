// 1162. 후위표기식 2

#include <stdio.h>
#include <stack>
#include <string.h>

using namespace std;

stack<double> s;

int n, len;
double a, b;
double map[1000];
char cmd[1001];

int main()
{
    scanf("%d", &n);
    scanf("%s", cmd);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &map[i]);
    }
    len = strlen(cmd);
    for (int i = 0; i < len; i++)
    {
        if (cmd[i] >= 'A' && cmd[i] <= 'Z')
        {
            s.push(map[cmd[i] - 'A']);
        }
        //+
        else if (cmd[i] == '+')
        {
            a = s.top();
            s.pop();
            b = s.top();
            s.pop();
            s.push(a + b);
        }
        //-
        else if (cmd[i] == '-')
        {
            a = s.top();
            s.pop();
            b = s.top();
            s.pop();
            s.push(b - a);
        }
        //*
        else if (cmd[i] == '*')
        {
            a = s.top();
            s.pop();
            b = s.top();
            s.pop();
            s.push(a * b);
        }
        ///
        else if (cmd[i] == '/')
        {
            a = s.top();
            s.pop();
            b = s.top();
            s.pop();
            s.push(b / a);
        }
    }
    printf("%.2lf", s.top());
    return 0;
}
