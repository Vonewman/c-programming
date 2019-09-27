/**
 * swap.c
 *
 * By: Abdoulaye Diallo <vonewman7@gmail.com>
 * Created: 2019/27/09 16:30 by AD
 * Update: 2019/27/09 16:30 by AD
 *
 *****************************************************/


#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int a = 3;
    int b = 4;

    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return EXIT_SUCCESS;
}
