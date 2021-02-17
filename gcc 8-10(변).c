#include <stdio.h>

int find_min(int a, int b, int c){
  int k;
  k=(a>b)?((b>c)?c:b):((a>c)?c:a);
  return k;
}

int gcd(int min, int a, int b, int c){
  int max;
  for(int i =1; i<min;i++){
    if(min%i==0&&a%i==0&&b%i==0&&c%i==0){
      max =i;
    }
  }
  return max;
}

int main() {
  int a, b,c;
  scanf("%d%d%d",&a,&b,&c);
  printf("%d", gcd(find_min(a,b,c),a,b,c));
  return 0;
}
