#include <stdio.h>

int main() {
  char str[20][128]={0,};
  int i;
  for(i=0;i<20;i++){
    scanf("%s",str[i]);
    if(str[i][0]=='@'&&str[i][1]=='@'&&str[i][2]=='@'&&str[i][3]=='@'&&str[i][4]=='\0'){
      break;
    }
  }
  for(;i>=0;i--){
    printf("s[%d] = %s\n",i,str[i]);
  }
  return 0;
}
