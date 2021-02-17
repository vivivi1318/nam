#include <stdio.h>

int main() {
  double value1,value2;
  double istack=0,fstack=0,t;
  scanf("%lf%lf",&value1,&value2);
  istack=(int)value1;
  fstack=value2-(int)value2;
  t=fstack*10-(int)fstack*10;
  if(fstack==0){
    printf("%0.1lf",istack+fstack);
  }
  else{
  
    printf("%0.9g",istack+fstack);
  }
 return 0;   
}
