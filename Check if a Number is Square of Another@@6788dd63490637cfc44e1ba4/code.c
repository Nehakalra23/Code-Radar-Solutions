#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d",&num1,&num2);
    if (num2 == num1 * num1) {
        printf("Yes");  
    } 

    else if(num2 != num1*num1){
        printf("No");
    }

    return 0;
}
