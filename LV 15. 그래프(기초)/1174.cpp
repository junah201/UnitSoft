//1174. 연락망

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int N,M,x,y,cnt;

vector<int> v[101];
int list[101][101];
int check[101];

int dfs(int idx) {
	v[cnt].push_back(idx);
    check[idx] = 1;
	for(int i=1;i<=N;i++) {
		if(list[idx][i]==1 && check[i]==0) {
			list[idx][i] = 0;
			list[i][idx] = 0;
            dfs(i);
        }
	}
	return 0;
}

int main() {
    scanf("%d\n%d", &N, &M);
    for(int i=0;i<M;i++) {
        scanf("%d %d",&x,&y);
        list[x][y] = 1;
		list[y][x] = 1;
    }
	for(int i=1;i<=N;i++) {
		if(check[i]==0) {
			dfs(i);
			cnt++;
		}
	}
    printf("%d\n",cnt);
	for(int i=0;i<cnt;i++) {
		sort(v[i].begin(),v[i].end(),[](int a,int b){return a>b;});
		while(!v[i].empty()) {
			printf("%d ",v[i].back());
			v[i].pop_back();
		}
		printf("\n");
	}
    return 0;
}
