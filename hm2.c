#include<stdio.h>

#include <stdio.h>

int sum_even_index_values(void) {
    char short_data[9] = { 4, 6, 9, 8, 7, 2, 5, 1, 3 };
    int sum = 0;

    for (int i = 0; i < 9; i += 2) {
        sum += short_data[i];
    }

    return sum;
}

int main(void) {
    int result = sum_even_index_values();
    printf("짝수의 합: %d\n", result);
    return 0;
}
