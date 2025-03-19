#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if((ch>="A")&&(ch<="Z")){
        printf("  Uppercase");

    }
    else if((ch>="a")&&(ch<="z")){
        printf("Lowercase");
    }
    else{
        printf("Neither Uppercase nor Lowercase");
    }
    return 0;
}