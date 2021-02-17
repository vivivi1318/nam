#include <stdio.h>

struct student{ char name[20]; int kor, eng, math; double average; };

int main() {
  int n;
  scanf("%d",&n);
  struct student std[n];
  for(int i=0;i<n;i++){
    scanf("%s %d %d %d",std[i].name,&std[i].kor,&std[i].eng,&std[i].math);
    std[i].average=(double)(std[i].kor+std[i].eng+std[i].math)/3;
    printf("%s, %.2lf\n",std[i].name,std[i].average);
  }
  
  
  return 0;
}
