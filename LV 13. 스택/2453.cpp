// 2453. RBCRBC 2

#include <stdio.h>
#include <stack>

using namespace std;

int N;

struct num
{
    int value;
    int idx;
};

stack<num> temp, s;
stack<int> result;

int main()
{
    scanf("%d", &N);
    for (int i = 1, grade; i <= N; i++)
    {
        scanf("%d", &grade);
        temp.push({grade, i});
    }
    for (int i = 1, check; i <= N; i++)
    {
        check = 0;
        while (!s.empty())
        {
            if (s.top().value > temp.top().value)
            {
                result.push(s.top().idx);
                check = 1;
                break;
            }
            s.pop();
        }
        if (check == 0)
            result.push(-1);
        while (!s.empty() && s.top().value <= temp.top().value)
            s.pop();
        s.push(temp.top());
        temp.pop();
    }
    while (!result.empty())
    {
        printf("%d ", result.top());
        result.pop();
    }
    return 0;
}