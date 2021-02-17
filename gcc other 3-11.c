#include <stdio.h>

int main() {
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if(a==b&&b==c){
    printf("정삼각형");
  }
  else if (a!=b&&b!=c&&c!=a){
    printf("기타삼각형");
  }
  else{
    printf("이등변삼각형");
  }
 return 0;   
}
