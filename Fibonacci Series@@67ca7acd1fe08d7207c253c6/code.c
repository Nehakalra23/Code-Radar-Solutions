#include <stdio.h>
int fibonacci(int);
int fibonacci(int n){
    if(n==1||n==2){
        return n-1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        printf("%d",fibonacci(i));

    }
    return 0;
}