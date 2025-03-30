#include <stdio.h>
int main() {
  int n;
  int prime=0;
  scanf("%d",&n);
  for(int i=1;i<n;i++)
  {
    if(n%i==0 && n!=2){
      prime =1;
    }
    if(prime){
      printf("Prime");
    }
  
    else{
      printf("Not Prime");
    }
    return 0;
}
  
}
