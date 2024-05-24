/*
Write a program that reads an integer entered by the user and displays it in octal (base 8):
Enter a number between 0 and 32767: 1953
In octal, your number is: 03641
The output should be displayed using five digits, even if fewer digits are sufficient. Hint: To
convert the number to octal, first divide it by 8; the remainder is the last digit of the octal
then divide the original number by 8 and repeat the process
*/
#include <stdio.h>

int main(void) {
    int base10, i1,i2,i3,i4,i5;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &base10);
    i5 = base10 % 8;
    i4 = (base10 / 8) % 8;
    i3 = (base10 / 64) % 8;
    i2 = (base10 / 512) % 8;
    i1 = (base10 / 4096) % 8;
    printf("in octal, your number is %d%d%d%d%d",i1, i2, i3, i4, i5 );
    return 0;
}