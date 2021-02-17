#include <stdio.h>

enum option {Recursive, Nonrecursive};

int factorial (int num, enum option option){
  if(num==1){
    return 1;
  }
  else{
    return num*factorial(num-1,Recursive);
  }
  return 0;
}

int main() {
  int a,b;
  int stack = 1;
  scanf("%d %d",&a,&b);
  if(b==Recursive){
    stack = factorial(a, Recursive);
  }
  else{
    for(int i=a;i>0;i--){
      stack*=i;
    }
  }
  printf("%d",stack);
}
