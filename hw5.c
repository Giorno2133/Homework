#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int first = number / 100;
    int second = (number / 10) % 10;
    int third = number % 10;

    printf("%d\n", first + second + third);

    return 0;
}
