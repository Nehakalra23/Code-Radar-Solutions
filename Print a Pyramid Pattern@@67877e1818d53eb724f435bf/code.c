#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i<1;i++){
        for(j=i;j<=(2*i-1);j++){
             printf(" *");

        }
        
    }
    return 0;

}
