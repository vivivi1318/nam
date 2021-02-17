#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  char s[128]={0,};
  char temp[128]={0,};
  char tmp[128]={0,};
  int m=0,n=0;
  scanf("%[^\n]",s);
  for(int i=0;i<strlen(s);i++){
    if(s[i]>='0' && s[i]<='9'){
      temp[m]=s[i];
      m++;
    }
    else{
      tmp[n]=s[i];
      n++;
    }
  }
  int x= atoi(temp);
  printf("%d\n",x*2);
  printf("%s",tmp);
  return 0;
}
