#include <stdio.h>
int main(){
    char name[100];
    int age;
    char hobby[100];
    
    scanf("%[^\n]%*c",name);
    printf("Name: %s\n",name);
    scanf("%d",&age);
    printf("Age: %d\n",age);
    getchar();
    scanf("%[^\n]%*c",hobby);
    printf("Hobby: %s\n",hobby);
    return 0;
    
    }