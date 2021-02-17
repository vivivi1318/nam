#include <stdio.h>

int main(void) {
  int one=0,two=0,three=0,four=0,last=0,stack=0,input=0;

  scanf("%d",&input);
  if(input%10>=3) one++;//1
  if(input%100>=30&&input%100<40){
    two+=(input%10);
    two++;
  } //10
  else if(input%100>40){
    two+=10;
  }
  if(input%1000>=300&&input%1000<400){
    three+=(input%100);
    three++;
  } 
  else if(input%1000>400){
    three+=100;
  }//100
  if(input>10000&&(input%10000>=3000&&input%10000<4000)){
    four+=(input%1000);
    four++;
  } 
  else if(input>10000&&input%10000>4000){
    four+=1000;
  }

  last+=input/10;
  last+=(input/100)*10;
  last+=(input/1000)*100;
  last+=(input/10000)*1000;

  stack=one+two+three+four+last;
  printf("%d",stack);
  return 0;
}
