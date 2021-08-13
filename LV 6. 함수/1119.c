//1119. 모든 수에 대한 절대값 함수 만들기

#include <stdio.h>
#include <string.h>
#include <math.h>

double ABS(double value) {
	if (value >= 0)
		return value;
	else
		return -value;
}
int main() {

	double value;
	scanf("%lf", &value);

	printf("%.10g", ABS(value));
	return 0;
}
