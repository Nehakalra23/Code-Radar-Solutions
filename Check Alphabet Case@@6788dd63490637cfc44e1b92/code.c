#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if((ch>="A")&&(ch<="Z")){
        printf(" %c\n Uppercase",ch);

    }
    else if((ch>="a")&&(ch<="z")){
        printf("%c\n Lowercase",ch);
    }
    else{
        printf("%ch\n Neither Uppercase nor Lowercase",ch);
    }
    return 0;
}