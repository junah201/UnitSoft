// 1717. 거꾸로-2

#include <bits/stdc++.h>
using namespace std;

char str[102];
int len;

int main()
{
    while (scanf("%s", &str) != EOF)
    {
        len = strlen(str);
        for (int i = len - 1; i >= 0; i--)
            printf("%c", str[i]);
        printf(" ");
    }
    return 0;
}