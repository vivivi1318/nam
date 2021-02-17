#include <stdio.h>
#include <string.h>
int main(void) {
  char s[128]={0,};
  char temp[128]={0,};
  char tmp[128]={0,};
  int m=0,n=0;
  scanf("%[^\n]",s);
  for(int i=0;i<strlen(s);i++){
    if(s[i]>='0' && s[i]<='9'&&m<6){
      temp[m]=s[i];
      m++;
    }
    else if(s[i]>='0' && s[i]<='9'){
      tmp[n]=s[i];
      n++;
    }
  }
  printf("%s-%s",temp,tmp);
  return 0;
}
