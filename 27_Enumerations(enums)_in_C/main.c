/*
 Create an enum with enum constants Sunday,
 Monday, Tuesday, Wednesday, Thursday, Friday,
 and Saturday.

 Inside the main function()

 * Create two enum variables named
   weekend1 and weekend2.

 * Assign values Sunday and Saturday to the
   variables respectively.

 * Print the values of weekend1 and weekend2.
 */

#include <stdio.h>

enum WEEKENDS {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
} weekend_days;

int main() {
    enum WEEKENDS weekend1 = Sunday;
    enum WEEKENDS weekend2 = Saturday;
    weekend_days = Tuesday;

    printf("Choice of Weekends currend days number is %d\n", weekend_days);
    printf("Weekend 1's days number is %d\n", weekend1);
    printf("Weekend 2's days number is %d", weekend2);

    return 0;
}
