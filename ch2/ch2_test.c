#include <stdio.h>

int main(void) {
	// 이름
	char name[256];
	char id[256];
	int age;
	char bday[256];
	int footsize;

	// 다중 입력
	printf("이름, 아이디, 나이, 생일, 신발 크기를 공백으로 구분하여 입력하세요:\n");
	scanf_s("%s %s %d %s %d", name, sizeof(name), id, sizeof(id), & age, bday, sizeof(bday), &footsize);

	printf("\n\n--- 회원 정보 ---\n\n");
	printf("이름 : %s\n", name);
	printf("아이디 : %s\n", id);
	printf("나이 : %d\n", age);
	printf("생일 : %s\n", bday);
	printf("신발 크기 : %d\n", footsize);
}