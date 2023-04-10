#include <stddef.h>
#include "sorts.h"

void bubble_sort(int* array, size_t size) {
	for(int i = 0; i < size; i++) {
		for(int j = i; j < size; j++) {
			if(array[i] > array[j]) {
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

