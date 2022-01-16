//1176. 오일러 경로 (한붓 그리기)

#include <stdio.h>

int map[1001][1001];
int N,odd,even,cnt;

int main() {
	scanf("%d",&N);
	for(int i=1;i<=N;i++) {
		for(int j=1;j<=N;j++) {
			scanf("%d",&map[i][j]);
		}
	}
	for(int i=1;i<=N;i++) {
		cnt = 0;
		for(int j=1;j<=N;j++) {
			cnt += map[i][j];
		}
		if(cnt%2==0) even++;
		else odd++;
	}
	if(odd==2 || odd==0) printf("YES");
	else printf("NO");
	return 0;
}
