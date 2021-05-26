#include <stdio.h>

int main() {
	int age;
	char name[10];

	printf("당신의 나이를 입력하세요 : ");
	scanf("%d", &age);

	printf("당신의 이름을 입력하세요 : ");
	scanf("%s", &name);

	printf("우와 당신은 %d살이고 이름은%s군요!", age, name);
}	