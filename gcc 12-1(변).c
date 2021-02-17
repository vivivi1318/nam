#include <stdio.h>
#define NUMBER 20
struct student{ char name[NUMBER]; int height; float weight; long schols; };

int main() {
  struct student std1;
  scanf("%s %d %f %ld",std1.name, &std1.height, &std1.weight, &std1.schols);

  printf("name = %s\nheight = %d\nweight = %.2f\nschols = %ld",std1.name, std1.height, std1.weight, std1.schols);

  
  return 0;
}
