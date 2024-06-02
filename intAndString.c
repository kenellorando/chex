#include <stdio.h>

int main(void) {
    unsigned int anInt;
    char aString[10];

    printf("Enter number in hexadecimal: ");
    scanf("%x", &anInt);
    printf("Enter the same number again: ");
    scanf("%s", aString);
    printf("The integer is %u and the string is %s\n", anInt, aString);
    
    return 0;
}