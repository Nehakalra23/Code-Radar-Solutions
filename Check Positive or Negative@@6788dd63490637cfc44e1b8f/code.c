#include <stdio.h>

int main() {
    int num1;
    scanf("%d %d", &num1);

    if (num1 > 0){
        printf("Positive");}
    else if (0 > num1){
        printf("Negative");}
    else{
        printf("Both numbers are equal.\n");}

    return 0;
}
