#include <stdio.h>

int main(void) {
    int base10, i1,i2,i3,i4,i5, i6, i7, i8, i9;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &base10);
    i9 = base10 % 2;
    i8 = (base10 / 2) % 2;
    i7 = (base10 / 4) % 2;
    i6 = (base10 / 8) % 2;
    i5 = (base10 / 16) % 2;
    i4 = (base10 / 32) % 2;
    i3 = (base10 / 64) % 2;
    i2 = (base10 / 128) % 2;
    i1 = (base10 / 526) % 2;
    printf("in binary, your number is %d%d%d%d%d%d%d%d%d",i1, i2, i3, i4, i5,i6,i7,i8,i9);
    return 0;
}