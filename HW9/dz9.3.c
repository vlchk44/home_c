#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_DIGITS 1001

void count_and_print_digits(const char *number) {
    int count[10] = {0};

    for (int i = 0; number[i] != '\0'; i++) {
        if (isdigit((unsigned char)number[i])) {
            count[number[i] - '0']++;
        }
    }

    for (int d = 0; d <= 9; d++) {
        if (count[d] > 0) {
            printf("%d %d\n", d, count[d]);
        }
    }
}

int main(void) {
    char number[MAX_DIGITS];

    if (scanf("%1000s", number) != 1) {
        return 1;
    }

    count_and_print_digits(number);

    return 0;
}
