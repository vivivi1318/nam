#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int str_index(char *s,char key){
  int value=-1;
  for(int i=0;i<strlen(s);i++){
    if(s[i]==key){
      value=i;
      break;
    }
  }
  return value;
}

int main() {
  char str[128];
  scanf("%[^\n]",str);
  getchar();
  char key;
  scanf("%c",&key);
  int k= str_index(str,key);
  printf("%d",k);
  return 0;
}
