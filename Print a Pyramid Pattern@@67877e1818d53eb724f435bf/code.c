#include <stdio.h>
int main(){
    int n, i, j;
    scanf("%d", &n); // Input the number of rows
    
    // Outer loop for each row
    for(i = 1; i <= n; i++){
        // Print spaces for centering stars
        for(j = 1; j <= n - i; j++){
            printf(" ");
        }

        // Print stars for the pyramid row
        for(j = 1; j <= (2 * i - 1); j++){
            printf("*");
        }

        // Move to the next line after printing stars in a row
        printf("\n");
    }

    return 0;
}
