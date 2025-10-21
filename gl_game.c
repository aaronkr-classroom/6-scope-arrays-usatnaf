#include<stdio.h>
#include<string.h>

int rand_num;

void gamelint(void) {
	srand(time(0));
	rand_num = rand() % 10 + 1;
}

void gamePlay(void) {

	int guess = 0, count = 0, allowed = 5;

	printf("guess thr number(1-10):");

	do {
		scanf_s("%d", &guess);
		count++;

		if (guess == rand_num) {
			printf("정답!!");
		}
		else if (guess < rand_num) {
			printf("업");
		}
		else if (guess > rand_num) {
			printf("다운");
		}
	} while (count != allowed);

	if (count != allowed) {
		printf("끗");
	}
}
int main(void) {
	gamelint();
	gamePlay();
	return 0;
}