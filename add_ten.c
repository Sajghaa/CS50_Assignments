#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    number += 10;
    
    printf("The result after adding 10 is: %d\n", number);
    
    return 0;
}