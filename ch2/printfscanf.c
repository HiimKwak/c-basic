#include <stdio.h>

int main_printfscanf(void) {
	char str1[256], str2[256];
	printf("입력해라 범부여 : ");
	scanf_s("%s", str1, (unsigned int) sizeof(str1));
	printf("입력해라 범부범부여 : ");
	scanf_s("%s", str2, (unsigned int)sizeof(str2));
	printf("입력값 : %s %s\n", str1, str2);
	return 0;
}