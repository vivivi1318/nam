#include <stdio.h>

int main() {
  int mx[200]={0};
  int value,stack=0;
  scanf("%d",&value);
  for(int i=1;i<200;i++){
    mx[i]=i;
  }
  
  for (int i = 0; i < 50; i++) {
    stack+=(mx[i+1+value]+mx[100-i+value]);
  }
  
  printf("%d",stack);
  return 0;
}
