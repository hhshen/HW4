#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

void reverse(int *numbers, unsigned count) {
	int temp;
	int i;
	int j = count;
	unsigned half = count/2;

	for (i = 0; i < half; i++) {
		temp = numbers[i];
		numbers[i] = numbers[j];
		numbers[j] = temp;
		j--;
	}
}
