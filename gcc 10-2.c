#include <stdio.h>
int is_yoon(int y){
  return y%4==0 && (y%100!=0 || y%400==0);
}
int day_of_month(int y,int m){
  int month[2][12]={
    {31,28,31,30,31,30,31,31,30,31,30,31},
    {31,29,31,30,31,30,31,31,30,31,30,31}
  };
  return month[is_yoon(y)][m-1];
}
void plus_day(int *y,int *m,int *d){
  if(*d==day_of_month(*y, *m)){
    if(*m==12){
      ++*y;
      *m=1;
      *d=1;
    }
    else{
      ++*m;
      *d=1;
    }
  }
  else{
    ++*d;
  }
}
void minus_day(int *y,int *m,int *d){
  if(*d==1){
    if(*m==1){
      --*y;
      *m=12;
      *d=31;
    }
    else{
      --*m;
      *d=day_of_month(*y, *m);
    }
  }
  else{
    --*d;
  }
}
int main() {
  int y,m,d,n;
  scanf("%d %d %d %d",&y,&m,&d,&n);

  if(n>0){
    for(int i=0;i<n;i++){
      plus_day(&y,&m,&d);
    }
  }
  else{
    for(int i=0;i<-n;i++){
      minus_day(&y,&m,&d);
    }
  }

  printf("%d %d %d\n",y,m,d);
  
  return 0;
}
