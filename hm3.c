
#include<stdio.h>


int max(void) {
	char short_data[9] = { 4,6,9,8,7,2,5,1,3 };
	int max = 0;
	for (int i = 0; i < 9; i++) {
		
	 if (short_data[i] > max) {
			max = short_data[i];
		}
	}
	return max;
}
int main(void) {
	printf("MAX:%d", max());
	return 0;
}