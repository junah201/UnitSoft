//1152. circle crash

#include <stdio.h>
#include <string.h>
#include <math.h>

struct circle
{
    int x,y,r;
};

struct circle a,b;


int main()
{
	scanf("%d %d %d %d %d %d",&a.x,&a.y,&a.r,&b.x,&b.y,&b.r);

	if((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)>(a.r+b.r)*(a.r+b.r)){
		printf("false");
	}else{
		printf("true");
	}
	return 0;
}
