#include <stdio.h>
int main(){
    int a,b,b;
    scanf("%d %d %d",&a ,&b,&c);
    if(a==b==c){
        printf("Equilateral");
    }
    else if(a==b||b==c||a==c){
        printf("Isocelous");
    }
    else{
        printf("Scalene")
    }
    return 0;
}