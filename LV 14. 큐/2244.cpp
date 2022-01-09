//2244. Dequeue 연습2

#include <stdio.h>
#include <queue>

using namespace std;

int N,temp;
deque <int> a;

int main() {
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d",&temp);
        a.push_back(temp);
    }
    for(int i=0;i<N;i++) {
        if(i%2==1) {
            printf("%d\n",a.back());
            a.pop_back();
        }
        else {
            printf("%d\n",a.front());
            a.pop_front();
        }
    }
    return 0;
}
