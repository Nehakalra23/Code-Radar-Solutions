#include <stdio.h>
#include <ctype.h> // For tolower() function

int main(){
    char character;
    scanf("%c", &character);
    
    // Convert character to lowercase for case-insensitive comparison
    character = tolower(character);
    
    // Check if the character is a vowel
    if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u'){
        printf("Vowel");
    }
    // Check if the character is a consonant
    else if((character >= 'a' && character <= 'z')) {
        printf("Consonant");
    }
    // Check if the character is a digit
    else if(character >= '0' && character <= '9') {
        printf("Digit");
    }
    // Check if the character is a special character
    else {
        printf("Special character");
    }
    
    return 0;
}

