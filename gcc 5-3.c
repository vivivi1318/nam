#include <stdio.h>
#include <stdlib.h>
int main() {
  int value,stack=1;
  scanf("%d",&value);
  value = abs(value);
  int arr1[value*4];
  for(int k=0;k<value*4;k++){
    arr1[k]=k;
  }
  for(int i=0;i<value;i++){
    if(stack%2==1){
      for(int j=i*4;j<4*stack;j++){
        printf("%d",arr1[j]);
      }
      printf("\n");
      stack++;
    }
    else{
      for(int j=i*4+3;j>=i*4;j--){
        printf("%d",arr1[j]);
      }
      printf("\n");
      stack++;
    }
    
  }
  
  return 0;
}
