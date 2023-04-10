#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include "sorts.h"

void test_bubble() {
	int array[] = { 5, 4, 1, 3, 2 };
	int sorted_array[] = { 1, 2, 3, 4, 5 };
	size_t size = 5;
	bubble_sort(array, size);
	for(int i = 0; i < size; i++) {
		printf("%d == %d\n", array[i], sorted_array[i]);
		assert(array[i] == sorted_array[i]);
	}
}

int main(int argc, char* argv[]) {
	test_bubble();
	
	return EXIT_SUCCESS;
}
/* vim: set tabstop=4 shiftwidth=4 fileencoding=utf-8 noexpandtab: */

