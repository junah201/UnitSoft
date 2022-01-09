//2236. Queue연습

#include <stdio.h>
#include <queue>

using namespace std;

int N,temp;
queue <int> a;

int main() {
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d",&temp);
        a.push(temp);
    }
    for(int i=0;i<N;i++) {
        printf("%d\n",a.front());
        a.pop();
    }
    return 0;
}
