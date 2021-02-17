#include <stdio.h>
#include <stdlib.h>
int main() {
  char a,b;
  int result1,result2;
  scanf("%c %c",&a,&b);
  result1=(int)a;
  result2=(int)b;
  printf("%d",abs(result1-result2));
 return 0;   
}
