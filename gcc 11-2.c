#include <stdio.h>
#include <string.h>

int main(void) {
  char ss[256];
  scanf("%s",ss);
  for(int i=0;i<strlen(ss);i++){
    if(ss[i]=='a'){
      printf(" ");
    }
    else printf("%c",ss[i]-1);
  }
  return 0;
}
