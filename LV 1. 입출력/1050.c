//1050. 화학 실험

#include <stdio.h>
 
int main() {
	float old = 0;
	float new = 0;
	scanf("%f",&old);
    while(1){
		scanf("%f",&new);
		if(new == 999){
			printf("End of Output");
			break;
		}
		printf("%.2f\n",new-old);
		old = new;
	}
}
