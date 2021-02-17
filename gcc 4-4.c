#include <stdio.h> 

int main(void) 
{ 
  for(int i=65;i<91;i++){
    for(int j=i;j<91;j++){
      printf("%c",j);
    }
    printf("\n");
  }
  return 0;
}
