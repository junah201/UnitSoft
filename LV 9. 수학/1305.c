//1305. 등비수열의 길이

#include <stdio.h>

unsigned long long a,r,n,cnt,num;

int main() {
	scanf("%llu %llu %llu",&a,&r,&n);
	for(int i=0;i<n;i++) {
		num = a;
		while(num) {
			cnt++;
			num/=10;
		}
		a*=r;
	}
	printf("%llu",cnt);
	return 0;
}
