//1577. 카드

#include <stdio.h>
#include <queue>

using namespace std;

int K[5000000];
deque <int> s;

int N;

int main() {
    scanf("%d",&N);
    for(int i=1;i<=N;i++) s.push_back(i);
    int i=0;
    while(s.size()!=1) {
        if(i%2==0) s.pop_front();
        else {
            s.push_back(s.front());
            s.pop_front();
        }
        i++;
    }
    printf("%d",s.front());
    return 0;
}
