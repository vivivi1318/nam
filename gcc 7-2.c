#include <stdio.h>

int main(void) {
  char str[9];
  int stack=0,two=1;
  scanf("%s", str);
  for(int i=7;i>=0;i--){
    if(str[i]=='1'){
      stack+=two;
    }
    two*=2;
  }
  printf("%d",stack);
  return 0;
}
