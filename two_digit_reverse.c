/*
Write a program that asks the user to enter a two-digit number, 
then prints the number with its digits reversed. 
A session with the program should have the following appearance:

Enter a two-digit number: 28
The reversal is: 82
*/

#include <stdio.h>

int main(void) {
    int x, y;
    printf("Enter two digit number: ");
    scanf("%1d%1d", &y, &x);
    printf("The reversal is %d%d\n", y, x);
    return 0;
}
