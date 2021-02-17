#include <stdio.h>


int b8toUC(char str[9]){
  int stack=0,two=1;
  for(int i=7;i>=0;i--){
    if(str[i]=='1'){
      stack+=two;
    }
    two*=2;
  }
  return stack;
}
int count1bit(int toUC){
  int st=0,two=128;
  for(int i =0;i<8;i++){
    if(toUC>=two){
      st++;
      toUC -= two;
    }
    two/=2;
  }
  return st;
}

int main(void) {
  char str[9];
  scanf("%s", str);
  printf("%d\n", b8toUC(str));
  printf("%d\n", count1bit( b8toUC(str) ) );
  return 0;
}
