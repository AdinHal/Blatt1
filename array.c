#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{

    int array[10];
    int x1 = 0;
    int x2 = 1;
    for (int x = 0; x < 10; x++) {
        if (x <= 1) {
            array[x] = x;
        } else if (x > 1) {
            array[x] = array[x - 1] + array[x - 2];
        }
    }
    srand(time(NULL));
    printf("Value of random index: %d\n", array[rand() % 10]);
    printArray(array);
}

int printArray(int array[10])
{
    for (int i = 0; i < 10; i++) {
        if (i == 0) {
            printf("%d", array[i]);
        } else {
            printf(" ,%d", array[i]);
        }
    }
}
