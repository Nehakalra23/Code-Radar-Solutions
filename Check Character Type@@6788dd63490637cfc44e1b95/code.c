#include <stdio.h>
#include <ctype.h> // For tolower() function

int main(){
    char character;
    scanf("%c", &character);
    
    // Convert character to lowercase for case-insensitive comparison
    character = tolower(character);
    
    if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    
    return 0;
}
