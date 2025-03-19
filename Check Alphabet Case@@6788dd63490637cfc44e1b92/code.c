

#include <stdio.h>

int main() {
    char ch;
    
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf(" Uppercase " );
    } else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' Lowercase \n", ch);
    } else {
        printf("'%c' is neither an uppercase nor a lowercase letter.\n", ch);
    }

    return 0;
}
