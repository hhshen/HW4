#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

void reverse(int *numbers, unsigned count) {
  int temp;
	int i, j;

	for(i = 0; i < count; i++) {
		for(j = 0; j < count - 1; j++) {
			if(compare(numbers[j+1], numbers[j]) < 0) {
				temp = numbers[j+1];
				numbers[j+1] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
}
