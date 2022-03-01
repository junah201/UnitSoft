// 1716. 거꾸로 -1(P)

#include <bits/stdc++.h>
using namespace std;

string str;
int len;

int main()
{
    getline(cin, str);
    for (int i = str.length() - 1; i >= 0; i--)
        printf("%c", str[i]);
    return 0;
}