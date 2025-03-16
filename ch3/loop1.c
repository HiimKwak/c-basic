#include <stdio.h>

int main_loop1(void) {
	int start = 2;
	while (start <= 9) {
		printf("%d´Ü Ãâ·Â\n", start);
		for (int i = 1; i <= 9; i++) {
			printf("  %d x %d = %d\n", start, i, start*i);
		}
		start++;
	}

	return 0;
}