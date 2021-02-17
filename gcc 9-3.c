#include <stdio.h>


int find_c(char s[][30], int n,char c){
  int stack=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<30;j++){
      if(s[i][j]==c){
        stack++;
      }
    }
  }
  return stack;
}

int main() {
  int n,stack;
  char c;
  char s[10][30]={0,};
  scanf("%d",&n);
  getchar();
  scanf("%c",&c);
  getchar();
  for(int i=0;i<n;i++){
    scanf("%s",s[i]);
  }
  stack = find_c(s,n,c);
  printf("%d",stack);
  return 0;
}
