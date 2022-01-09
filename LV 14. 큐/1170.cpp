//1170. 최소값 찾기

#include <stdio.h>
#include <queue>

using namespace std;

int K[5000000];
deque <int> s;

int N,L;

int main() {
    scanf("%d %d",&N,&L);
    for(int i=0;i<N;i++) scanf("%d",&K[i]);
    for(int i=0;i<N;i++) {
        if((!s.empty()&&i>=L)&&K[i-L]==s.front()) s.pop_front();
        while(!s.empty() && s.back()>K[i]) {
            s.pop_back();
        }
        s.push_back(K[i]);
        printf("%d ",s.front());
    }
    return 0;
}
