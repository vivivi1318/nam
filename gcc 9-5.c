#include <stdio.h>
#include<string.h>

void change_string(char cs[][128], int n){
  char change;
  change = cs[0][n];
  cs[0][n]=cs[1][n];
  cs[1][n]=change;
}

int main(void) {
  char cs[2][128]={0,};
  char split[2][128]={" "," "};
  int n;
  scanf("%s %s",cs[0],cs[1]);
  scanf("%d",&n);
  change_string(cs,n);
  printf("%s %s\n",cs[0],cs[1]);
  for(int i =0; i<strlen(cs[0]);i++){
    split[0][strlen(cs[0])-1-i]=cs[0][i];
  }
  for(int i =0; i<strlen(cs[1]);i++){
    split[1][strlen(cs[1])-1-i]=cs[1][i];
  }
  printf("%s %s",split[0],split[1]);
  return 0;
}
