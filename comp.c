#include<stdio.h>

void printfbinary(unsigned char num) {
	for (int i = 7; i >= 0; i--) {
		printf("%d", (num >> i) & 1);
	}
}

unsigned char onescomp(unsigned char num) {
	return ~num;
}

unsigned char twocomp(unsigned char num) {
	return ~num + 1; 
}

int main(void) {
	unsigned char num;

	printf("enter a number (0-255):");
	scanf_s("%hhu", &num);

	printf("\noriginal:%3d=", num);
	printfbinary(num);

	unsigned char ones = onescomp(num);
	printf("\n1의 보수:%3d=", num);
	printfbinary(num);

	unsigned char twos = twocomp(num);
	printf("\n2의 보수:%3d=", num);
	printfbinary(num);
	return 0;
}