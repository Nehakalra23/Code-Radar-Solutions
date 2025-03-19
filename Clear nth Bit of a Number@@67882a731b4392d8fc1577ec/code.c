#include <stdio.h>

int clearNthBit(int num, int n) {
    return num & ~(1 << n);  // Clear the nth bit
}

int main() {
    int num, n;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Enter the position of the bit to clear (0-based index): ");
    scanf("%d", &n);
    
    printf(" %d\n", n, clearNthBit(num, n));
    
    return 0;
}

