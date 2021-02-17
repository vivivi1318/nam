#include <stdio.h>
#include <string.h>

int main(void) {
  char ss[256];
  scanf("%[^\n]",ss);
  for(int i=0;i<strlen(ss);i++){
    printf("%c\n",ss[i]);
  }
  return 0;
}
