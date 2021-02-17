#include <stdio.h> 

int main(void) 
{ 
  int value=1;
  scanf("%d",&value);
  if(value%2==0){
    while(value>0){
      printf("%d ",value);
      value-=2;
    }
  }
  else{
    value-=1;
    while(value>0){
      printf("%d ",value);
      value-=2;
    }
  }
  return 0;
}
