#include <stdio.h>

int main() {
    float number;
    
    printf("Enter a number: ");
    scanf("%f", &number);
    
    float result = number * 10;
    
    printf("The result of multiplying %.2f by 10 is: %.2f\n", number, result);
    
    return 0;
}