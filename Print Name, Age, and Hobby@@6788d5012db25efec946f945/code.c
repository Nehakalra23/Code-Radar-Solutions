#include <stdio.h>

int main() {
    char name[100];
    int age;
    char hobby[100];
    
    // Read name (entire line including spaces)
    scanf("%[^\n]%*c", name);  // Reads until newline
    printf("Name: %s\n", name);
    
    // Read age
    scanf("%d", &age);  // Reads integer age
    printf("Age: %d\n", age);
    
    // Read hobby (entire line including spaces)
    scanf("%[^\n]%*c", hobby);  // Reads until newline
    printf("Hobby: %s\n", hobby);
    
    return 0;
}
