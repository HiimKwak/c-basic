#include <stdio.h>

int main_loop2(void) {
	int start = 1;
	int limit = 5;
	for (int i = start; i <= limit; i++) {
		for (int j = limit; j >= start; j--) {
			if (j <= i) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}