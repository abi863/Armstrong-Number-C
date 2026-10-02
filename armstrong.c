
#include <stdio.h>

int main() {
    int num, original, remainder;
    int sum = 0, digits = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("%d is not an Armstrong number.\n", num);
        return 0;
    }

    original = num;
    temp = num;

    // Count the number of digits
    do {
        digits++;
        temp /= 10;
    } while (temp != 0);

    temp = num;

    // Calculate the sum of each digit raised to 'digits'
    do {
        int power = 1;

        remainder = temp % 10;

        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }

        sum += power;
        temp /= 10;
    } while (temp != 0);

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}