#include <stdio.h>
int main(){
    char char;
    scanf("%c",&char);
    if(char=="A"){
        printf("Excellent");
    }
    else if(char=="B"){
        printf("Good");
    }
     else if(char=="C"){
        printf("Average");
    }
     else if(char=="D"){
        printf("Below Average");
    }
    else{
        printf("Fail");
    }


}