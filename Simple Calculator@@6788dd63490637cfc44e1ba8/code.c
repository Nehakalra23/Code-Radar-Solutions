#include <stdio.h>
int main(){
    int num1,num2;
    char operater;
    scanf("%d %d",&num1,&num2);
    if(operater=="+"){
        printf("%d",num1+num2);
    }
    else if(operater=="-"){
        printf("%d",num1-num2);
    }
    else if(operater=="*"){
        printf("%d",num1*num2);}
    else if(operater=="/"){
        printf("%d",num1/num2);}
    return 0;
}
