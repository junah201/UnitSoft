//1118. circle crash
#include <stdio.h>

int main() {
	int x1,y1,r1,x2,y2,r2;
	scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);

	if((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)>(r1+r2)*(r1+r2)){
		printf("false");
	}else{
		printf("true");
	}
	return 0;
}
