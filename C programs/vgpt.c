#include <stdio.h>

void main() {
    int day, year, month, max_days;
    const char *months[] = { "Invalid", "January", "February", "March", "April", "May", "June", 
                             "July", "August", "September", "October", "November", "December" };

    // Get a valid year
    do {
        printf("ENTER a year: ");
        scanf("%d", &year);
    } while (year < 1900 || year > 9999);

    // Get a valid month
    do {
        printf("ENTER a month: ");
        scanf("%d", &month);
    } while (month < 1 || month > 12);

    // Determine the maximum number of days in the month
    switch (month) {
        case 4: case 6: case 9: case 11:
            max_days = 30;
            break;
        case 2:
            max_days = (year % 4 == 0) ? 29 : 28;
            break;
        default:
            max_days = 31;
            break;
    }

    // Get a valid day
    do {
        printf("ENTER a day: ");
        scanf("%d", &day);
    } while (day < 1 || day > max_days);

    // Print the result with the month name
    printf("Today is %d of %s, year %d\n", day, months[month], year);
}
