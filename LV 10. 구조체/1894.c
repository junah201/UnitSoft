//1894. [basic] 구조체 실습문제-1

#include <stdio.h>

struct singsang {
    int bunho;
    char name[5];
    int age;
    char phone[16];
};

int main() {
    struct singsang A;
    scanf("%d %s %d %s",&A.bunho,&A.name,&A.age,&A.phone);
    printf("%02d\n%15s\n%02d\n%15s\n",A.bunho,A.name,A.age,A.phone);
    return 0;
}
