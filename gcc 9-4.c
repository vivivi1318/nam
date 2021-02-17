#include <string.h>
#include <stdlib.h>


int main() {
  int n,x,y,value,m;
  char a[10][10]={0,};
  char b[10][10]={0,};
  char tosting[3];
  scanf("%d",&n);
  getchar();
  char name[2];
  char type[10];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      a[i][j]='0';
      b[i][j]='0';
    }
  }
  scanf("%[^/]/%[^/]/%d/%d/%d",type,name,&x,&y,&value);
  if(!strcmp("array",type)){
    if(!strcmp("a",name)){
      if(x>=n){
        printf("row size error");
        return 0;
      }
      else{
        if(y>=n){
          printf("column size error");
          return 0;
        }
        else{
          printf("a array\n");
  
  for(int j=0;j<n;j++){
    if(j==x){
      for(int i =0; i<y;i++){
      putchar(a[x][i]);
    }
      
      sprintf(tosting,"%d",value);
      printf("%s",tosting);
      
      for(int i =y+1; i<n;i++){
        putchar(a[x][i]);
      }
      putchar('\n');
    }
    else{
      printf("%s\n",a[j]);
    }
  }
  m=10;
        }
        
      }
    }
  
    else if(!strcmp("b",name)){
      if(x>=n){
        printf("row size error");
        return 0;
      }
      else{
        if(y>=n){
          printf("column size error");
          return 0;
        }
        else{
            printf("b array\n");
  for(int j=0;j<n;j++){
    if(j==x){
      for(int i =0; i<y;i++){
      putchar(b[x][i]);
    }
      sprintf(tosting,"%d",value);
      printf("%s",tosting);
      for(int i =y+1; i<n;i++){
        putchar(b[x][i]);
      }
      putchar('\n');
    }
    else{
      printf("%s\n",b[j]);
    }
  }
  m=20;
        }
      }
    }
  }
  else{
    printf("not array");
    return 0;
  }
  if(m==10){
    printf("b array\n");
  for(int j=0;j<n;j++){
    printf("%s\n",b[j]);
  }
  }
  else{
    printf("a array\n");
  
  for(int j=0;j<n;j++){
    printf("%s\n",a[j]);
  }
  }
  
  return 0;
}
