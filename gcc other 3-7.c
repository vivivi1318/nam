#include <stdio.h>

int main() {
  int a,b,c,middle;
  scanf("%d%d%d",&a,&b,&c);
  middle= (a>=b&&c>=b)?(a>=c?c:a):(a>=c&&b>=c)?(a>=b?b:a):(b>=c?c:a);

  printf("%d",middle);
 return 0;   
}
