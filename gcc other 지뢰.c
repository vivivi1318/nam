#include <stdio.h>

int main() {
  int m,n;
  char boom[110][110];
  int stack[110][110];
  for (int o=0; o<110;o++){
    for(int p=0; p<110;p++){
      boom[o][p]=0;
      stack[o][p]=0;
    }
  }
  scanf("%d %d",&m,&n);
  
  for(int i=1;i<=m;i++){
    scanf("%s",boom[i]);
  }
  
  for(int i=1;i<=m;i++){
    for(int k=0;k<n;k++){
      if(boom[i][k]=='*'){
        stack[i-1][k]++;
        if(k-1>=0){
        stack[i-1][k-1]++;
        stack[i+1][k-1]++;
        stack[i][k-1]++;
        }
        stack[i-1][k+1]++;
        stack[i][k+1]++;
        stack[i+1][k]++;
        stack[i+1][k+1]++;
      }
    }
  }
  for(int i=1;i<=m;i++){
    for(int k=0;k<n;k++){
      if(boom[i][k]=='*')printf("*");
      else printf("%d",stack[i][k]);
    }
    printf("\n");
  }

 return 0;   
}
