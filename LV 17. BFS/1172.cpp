// 1172. 민수와 성하의 숨바꼭질

#include <stdio.h>
#include <queue>

using namespace std;

int N, K;
int check[100010];

int main() {
    scanf("%d %d", &N, &K);
    queue <pair<int, int>> q;
    q.push(make_pair(N, 0));
    while(! q.empty()) {
        pair <int, int> idx = q.front();
       
        q.pop();
        // 결과 출력
        if(idx.first == K) {
            printf("%d", idx.second);
            return 0;
        }
        // 
        if(idx.first < K) {
            if(idx.first + 1 <= 100000 && check[idx.first + 1] == 0) {
                q.emplace(idx.first + 1, idx.second + 1);
                check[idx.first + 1] = 1;
            }
            if(idx.first * 2 <= 100000 && check[idx.first * 2] == 0) {
                q.emplace(idx.first * 2, idx.second + 1);
                check[idx.first * 2] = 1;
            }
            if(check[idx.first - 1] == 0) {
                q.emplace(idx.first - 1, idx.second + 1);
                check[idx.first - 1] = 1;
            }
        }
        if(idx.first > K) {
            if(check[idx.first - 1] == 0) {
                q.emplace(idx.first - 1, idx.second + 1);
                check[idx.first - 1] = 1;
            }
        }
    }
}
