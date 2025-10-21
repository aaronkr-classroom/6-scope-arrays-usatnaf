#include<stdio.h>

#define num_std 3
#define num_grade 4

float calcavg(int data[]) {
	int sum = 0;
	for (int i = 0; i < num_grade; i++) {
		sum += data[i];
	}
	return sum / num_grade;
}

int main(void) {
	int grade[num_std][num_grade] = {
		{85,45,70,93},
		{74,86,93,45},
		{67,37,99,97}
	};

	printf("student grade\n");
	for (int i = 0; i < num_std; i++) {
		printf("student %d:", i + 1);
		for (int j = 0; j < num_grade; j++) {
			printf("%d", grade[i][j]);
		}
		printf("average:%.2f\n",calcavg(grade[i]));
	}
	return 0;
}