#include <stdio.h>

int result;
void test() {
	int result = 5;
	result++;
}
void main(void) {
	test();
	printf("result:%d", result);
	return 0;
}