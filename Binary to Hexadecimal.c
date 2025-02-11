#include <stdio.h>
#include <string.h>
#include <math.h>

int binaryToDecimal(const char *binary) {
    int decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[length - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}

void decimalToHexadecimal(int decimal, char *hexadecimal) {
    sprintf(hexadecimal, "%X", decimal);
}

int main() {
    char binary[65];
    char hexadecimal[17];
    
    printf("Enter a binary number: ");
    scanf("%64s", binary);
    
    int decimal = binaryToDecimal(binary);
    decimalToHexadecimal(decimal, hexadecimal);
    
    printf("Hexadecimal: %s\n", hexadecimal);
    
    return 0;
}