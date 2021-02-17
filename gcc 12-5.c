#include <stdio.h>
#include <math.h>
struct point { double x; double y; };

int main() {
  struct point dot[2];
  for(int i=0;i<2;i++){
    scanf("%lf %lf",&dot[i].x,&dot[i].y);
  }
  double deltas= sqrt(pow(dot[0].x-dot[1].x,2)+pow(dot[0].y-dot[1].y,2));
  printf("%.2lf",deltas);
  return 0;
}
