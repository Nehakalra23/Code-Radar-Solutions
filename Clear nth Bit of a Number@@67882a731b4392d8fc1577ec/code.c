#include <stdio.h>

int clearNthBit(int num, int n) {
    // Create a mask by shifting 1 left by n positions and then flipping all the bits
    int mask = ~(1 << n);
    
    // Use bitwise AND to clear the nth bit of num
    return num & mask;
}

int main() {
    int num, n;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Enter the position of the bit to clear (0-based index): ");
    scanf("%d", &n);
    
    // Clear the nth bit and print the result
    int result = clearNthBit(num, n);
    printf("Number after clearing the %d-th bit: %d\n", n, result);
    
    return 0;
}
