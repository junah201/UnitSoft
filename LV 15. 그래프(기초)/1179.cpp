//1179. 인접 리스트

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int N,M,x,y,check;

vector<int> v[1001];

int main() {
    scanf("%d %d", &N, &M);
	for(int i=0;i<M;i++) {
		scanf("%d %d",&x,&y);
		v[x].push_back(y);
		if(x==y) continue;
		v[y].push_back(x);
	}
	for(int i=1;i<=N;i++) {
		if(!v[i].empty()){
			printf("%d",i);
			sort(v[i].begin(),v[i].end());
			for(int j=0;j<v[i].size();j++) {
				printf(" - %d",v[i][j]);
			}
			printf("\n");
		}
	}
    return 0;
}
