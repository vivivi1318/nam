#include <stdio.h>
#include <stdlib.h>
int main() {
  int value,temp;
  scanf("%d",&value);
  value = abs(value);
  int arr1[value*5];
  for (int i=0;i<value*5;i++){
    scanf("%d",&arr1[i]);
  }

  for(int i=0; i<value*5-1; i++){
    for(int j=0; j<value*5-1-i; j++){
      if(arr1[j]<arr1[j+1]){
        temp = arr1[j];
        arr1[j] = arr1[j+1];
        arr1[j+1] = temp;
      }
    }
  }
  for (int i =0;i<value*5;i++){
    printf("%d ",arr1[i]);
  }
  return 0;
}
