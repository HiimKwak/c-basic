#include <stdio.h>

int main_printfscanf(void) {
	char str1[256], str2[256];
	printf("�Է��ض� ���ο� : ");
	scanf_s("%s", str1, (unsigned int) sizeof(str1));
	printf("�Է��ض� ���ι��ο� : ");
	scanf_s("%s", str2, (unsigned int)sizeof(str2));
	printf("�Է°� : %s %s\n", str1, str2);
	return 0;
}