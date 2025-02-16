#include <stdio.h>
int main(){
    char name[100];
    int age;
    char hobby[100];
    scanf("%[^\n]%*c",&name);
    printf("Name: %s",name);
    scanf("%d",&age);
    printf("Age: %d",age);
    scanf("%[^\n]%*c",&hobby);
    printf("Hobby: %s",hobby);
    return 0;
    
    }