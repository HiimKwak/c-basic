#include <stdio.h>

int main(void) {
	// �̸�
	char name[256];
	char id[256];
	int age;
	char bday[256];
	int footsize;

	// ���� �Է�
	printf("�̸�, ���̵�, ����, ����, �Ź� ũ�⸦ �������� �����Ͽ� �Է��ϼ���:\n");
	scanf_s("%s %s %d %s %d", name, sizeof(name), id, sizeof(id), & age, bday, sizeof(bday), &footsize);

	printf("\n\n--- ȸ�� ���� ---\n\n");
	printf("�̸� : %s\n", name);
	printf("���̵� : %s\n", id);
	printf("���� : %d\n", age);
	printf("���� : %s\n", bday);
	printf("�Ź� ũ�� : %d\n", footsize);
}