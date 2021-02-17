#include <stdio.h>
#include <math.h>
int main() {
  double value1,value2;
  int ivalue;
  scanf("%lf%lf%d",&value1,&value2,&ivalue);
  double result;
  result= value1/value2*100;
  switch(ivalue){
    case 0:printf("%0.0lf",floor(result));break;
    case 1:printf("%0.1lf",floor(result*10)/10);break;
    case 2:printf("%0.2lf",floor(result*100)/100);break;
    case 3:printf("%0.3lf",floor(result*1000)/1000);break;
    case 4:printf("%0.4lf",floor(result*10000)/10000);break;
    case 5:printf("%0.5lf",floor(result*100000)/100000);break;

  }
  
 return 0;   
}
