#include <stdio.h>

int main(void) {
  int ivalue1[3][3];
  int ivalue2[3][3];
  for(int i =0;i<3;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&ivalue1[i][j]);
    }
  }
  for(int i =0;i<3;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&ivalue2[i][j]);
    }
  }
  for(int i =0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d",ivalue1[i][j]-ivalue2[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
