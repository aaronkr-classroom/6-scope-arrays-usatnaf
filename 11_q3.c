#include <stdio.h>

int reslut;
void test() {
	static int result = 5;
	printf("result:%d\n",result++);
}
void main(void) {
	for(int i=0; i<5; i++) test();
	return 0;
}