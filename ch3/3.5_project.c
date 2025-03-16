#include <stdio.h>

int main(void) {
	int floor;
	printf("피라미드를 몇 층까지 쌓으시겠습니까? : ");
	scanf_s("%d", &floor);
	printf("피라미드를 건설 중입니다 ...\n");

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

	/* 모범답안
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