//1175. 이분 그래프

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int N,M,x,y;

vector<int> v[30000];
int colors[30000];
int no = 0;


int dfs(int idx,int color) {
	if(no) return -1;
	colors[idx] = color;
	for(int i=0;i<v[idx].size();i++) {
		int nextColor = colors[v[idx][i]];
		if(nextColor==0) {
			if(color==1) dfs(v[idx][i],2);
			else dfs(v[idx][i],1);
		}
		if(nextColor==color) {
			no = 1;
			return -1;
		}
	}
	return 0;
}

int main() {
    scanf("%d %d", &N, &M);
	for(int i=0;i<M;i++) {
		scanf("%d %d",&x,&y);
		v[x].push_back(y);
		if(x==y) continue;
		v[y].push_back(x);
	}
	for(int i=1;i<=N;i++) {
		if(colors[i]==0) dfs(i,1);
	}

	if(no) printf("NO");
	else printf("YES");
    return 0;
}
