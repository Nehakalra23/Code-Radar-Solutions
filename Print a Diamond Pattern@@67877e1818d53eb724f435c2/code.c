#include <stdio.h>
int main(){
    int n,j,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-1;j++){
            printf(" ");
        }
        for(j=1;j<=(2*n-1);j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=n-1;j++){
            printf(" ");
        }
        for(j=1;j<=(2*n-1);j++){
            printf("* ");

        }
        printf("\n");
    }
    return 0;
}

         