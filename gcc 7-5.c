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



int main(void) {
  char str1[9]={0,};
  char str2[9]={0,};
  char str3[9]={0,};
  scanf("%s", str1);
  scanf("%s", str2);
  printf("%d",b8toUC(str1)+b8toUC(str2));
  return 0;
}
