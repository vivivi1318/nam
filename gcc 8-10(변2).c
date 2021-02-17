#include <stdio.h>

int find_min(int a, int b, int c){
  int k;
  k=(a>b)?((b>c)?c:b):((a>c)?c:a);
  return k;
}

int gcd(int min, int a, int b, int c,int k){
  int list[min];
  for(int j=0;j<min;j++){
    list[j]=0;
  }
  int m = 0;
  for(int i =1; i<=min;i++){
    if(a%i==0&&b%i==0&&c%i==0){
      m++;
      list[m] =i;
    }
  }
  if((m-k+1)<=0){
    return -1;
  }
  return list[m-k+1];
}
// 1 2 3 4 6 12 24  
int main() {
  int a, b,c,k;
  scanf("%d%d%d",&a,&b,&c);
  scanf("%d",&k);
  printf("%d", gcd(find_min(a,b,c),a,b,c,k));
  return 0;
}
