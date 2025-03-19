#include <stdio.h>

int clearNthBit(int num, int n) {
    return num & ~(1 << n);  // Clear the nth bit
}

int main() {
    int num, n;
 
    scanf("%d", &num);
    
   
   
    scanf("%d", &n);
    
    printf(" %d\n", n, clearNthBit(num, n));
    
    return 0;
}

