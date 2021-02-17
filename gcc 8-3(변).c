#include <stdio.h>
#define swap(type,a,b) do{type t=a;a=b;b=t;}while(0)

enum type {INT, DOUBLE};

int main() {
  int a,b;
  double x,y;
  int ty;
  scanf("%d",&ty);
  if(ty==INT){
    scanf("%d%d",&a,&b);
    if(a>b){
      swap(int,a,b);
      printf("%d %d",a,b);
    }
  }
  else{
    scanf("%lf%lf",&x,&y);
    if(x>y){
      swap(double,x,y);
      printf("%0.2lf %0.2lf",x,y);
    }
  }


  return 0;
}
