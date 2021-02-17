#include <stdio.h>

char or(char str1[],char str2[],int k){
  if(str1[k]=='1'||str2[k]=='1'){
    return '1';
  }
  else{
    return '0';
  }
}
char and(char str1[],char str2[],int k){
  if(str1[k]=='1'&&str2[k]=='1'){
    return '1';
  }
  else{
    return '0';
  }
}

int main(void) {
  char a, b;
  char stra[9]={0,};
  char strb[9]={0,};
  scanf("%c %c", &a,&b);
  int two=128;
  for(int i =0;i<8;i++){
    if(a>=two){
      
      a-= two;
      stra[i]='1';
    }
    else{
      stra[i]='0';
    }
    two/=2;
  }
  two=128;
  for(int i =0;i<8;i++){
    if(b>=two){
      
      b-= two;
      strb[i]='1';
    }
    else{
      strb[i]='0';
    }
    two/=2;
  }
  printf("%s\n", stra);
  printf("%s\n", strb);
  for(int i=0;i<8;i++){
    printf("%c",and(stra,strb,i));
  }
  putchar('\n');
  for(int i=0;i<8;i++){
    printf("%c",or(stra,strb,i));
  }

  return 0;
}
