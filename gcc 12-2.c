#include <stdio.h>
#define NUMBER 20
struct student{ char name[NUMBER]; int id; float grade;};

int main() {
  struct student std1;
  scanf("%[^\n]",std1.name);
  scanf("%d %f",&std1.id,&std1.grade);
  if(std1.grade>=3.5){
    printf("%d %s",std1.id,std1.name);
  }
  else{
    printf("failed");
  }
  
  return 0;
}
