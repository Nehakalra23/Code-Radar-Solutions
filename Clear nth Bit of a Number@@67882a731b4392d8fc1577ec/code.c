#include <stdio.h>

int clearNthBit(int num, int n) {
    // Create a mask by shifting 1 left by n positions and then flipping all the bits
    int mask = ~(1 << n);
    
    // Use bitwise AND to clear the nth bit of num
    return num & mask;
}

int main() {
    int num, n;
    
    scanf("%d", &num);
    
    scanf("%d", &n);
    
    // Clear the nth bit and print the result
    int result = clearNthBit(num, n);
    printf("%d\n",n, result);
    
    return 0;
}
