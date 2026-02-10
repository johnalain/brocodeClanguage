#include <stdio.h>
#include <ctype.h>

int main() {
    char unit;
    float temp;

    printf("The temp is in (F) or (C): ");
    scanf(" %c", &unit);   // space is IMPORTANT
    unit = toupper(unit);

    if (unit == 'C') {
        printf("Enter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The temperature in Fahrenheit is: %.1f\n", temp);
    }
    else if (unit == 'F') {
        printf("Enter the temp in Fahrenheit: ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5 / 9;
        printf("The temperature in Celsius is: %.1f\n", temp);
    }
    else {
        printf("Enter a valid unit (C or F)\n");
    }

    return 0;
}
