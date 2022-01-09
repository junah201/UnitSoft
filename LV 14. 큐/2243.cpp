//2243. Dequeue 연습

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
        printf("%d\n",a.back());
        a.pop_back();
    }
    return 0;
}
