#include <stdio.h>


void del_non_digit(char s[][10], int n){
  for(int i=0;i<n;i++){
    char temp[10]={0,};
    int m=0;
    for(int j=0;j<10;j++){
      if(s[i][j]>='0'&&s[i][j]<='9'){
        temp[m]=s[i][j];
        m++;
      }
      s[i][j]=0;
    }
    for(int k=0;k<m;k++){
      s[i][k]=temp[k];
    }
  }
}

int main() {
  int n;
  scanf("%d",&n);
  char s[n][10];
  for(int i=0;i<n;i++){
    scanf("%s",s[i]);
  }
  del_non_digit(s,n);
  for(int i=0;i<n;i++){
    printf("%s\n",s[i]);
  }
  return 0;
}
