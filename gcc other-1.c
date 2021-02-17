#include <stdio.h> 

int main(void) 
{ 
  int value,one=0,two=0,stack=0,k=0,j=12,ex;
  scanf("%d",&value);
  while(j>0){
    two=0;
    k=0;
    one=0;
    stack=value;//100100100
    while(value!=0){
      two=value;
      value/=10;
      one++;
    }//1-9
    switch(two){
      case 1:printf("일");break;
      case 2:printf("이");break;
      case 3:printf("삼");break;
      case 4:printf("사");break;
      case 5:printf("오");break;
      case 6:printf("육");break;
      case 7:printf("칠");break;
      case 8:printf("팔");break;
      case 9:printf("구");break;
    }
    switch(one){
      case 10:printf("십");k=1000000000;break;
      case 9:printf("억");k=100000000;break;
      case 8:printf("천");k=10000000;break;
      case 7:printf("백");k=1000000;break;
      case 6:printf("십");k=100000;break;
      case 5:printf("만");k=10000;break;
      case 4:printf("천");k=1000;break;
      case 3:printf("백");k=100;break;
      case 2:printf("십");k=10;break;
    }
    value=stack-(two*k);//100100
    if(one==1)break;
    j--;
    if(ex-one>=2&&(one>4&&one<9)){
      printf("만");
    }
    ex=one;
  }

  return 0;
}
