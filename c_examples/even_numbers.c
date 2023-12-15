#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 101; i++) {
        j = i % 2;
        if (j == 0) {
            printf("%d,", i);
        }
    }

    return 0;
}