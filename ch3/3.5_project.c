#include <stdio.h>

int main(void) {
	int floor;
	printf("�Ƕ�̵带 �� ������ �����ðڽ��ϱ�? : ");
	scanf_s("%d", &floor);
	printf("�Ƕ�̵带 �Ǽ� ���Դϴ� ...\n");

	int row_max = 2 * floor - 1;
	int median = row_max / 2;

	for (int i = 0; i < floor; i++) {
		for (int j = 0; j < median - i; j++) {
			printf(" ");
		}
		for (int k = 0; k <= 2 * i; k++) {
			printf("*");
		}
		printf("\n");
	}

	/* ������
	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}*/
}