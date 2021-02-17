#include <stdio.h>

int main(void) {
  unsigned int a;
  int i=0;
  int stack[8]={0,};
  scanf("%d", &a);
  a%=256;
  while (1) {
  stack[i]=a%2;
  a/=2;
  i++;
  if(a==0){
    break;
  }
}
for(int j=7;j>=0;j--){
  printf("%d",stack[j]);
}
  return 0;
}
