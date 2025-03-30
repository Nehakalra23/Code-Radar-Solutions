#include <stdio.h>
int fibonachi(int);
int fibonachi(int n ){
  if(n==1||n==2){
    return n-1;
  }
  return fibonachi(n-1)+fibonachi(n-2);
  
  
}
int main(){
    int a;
    scanf("%d";&a);
  printf("%d",fibonachi(a));
  
  return 0;
}