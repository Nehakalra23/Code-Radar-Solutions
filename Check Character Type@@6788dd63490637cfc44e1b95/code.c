#include <stdio.h>
int main(){
    char character;
    scanf("%c",&character);
    for(character="a"||character="e"||character="i"||character="o"||character="u"){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}