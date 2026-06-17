//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	printf("N>2:");
	scanf_s("%d", &n);

	if (n < 2) {
		printf("ต้องมากกว่า 2 นะ");
		return 1;
	}

	
	int y[100];

	for (int i = 0; i < n; i++) {
		printf("Element %d: ", i + 1);
		scanf_s("%d", &y[i]);
	}

	printf("y = ");
	for (int i = 0; i < n; i++) {
		printf("%d", y[i]);
		if (i < n - 1) {
			printf(", ");
		}
	}
	printf("\n");



	return 0;
	
}