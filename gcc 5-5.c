#include <stdio.h>

int main() 
{
    int num[10];
    int k,j;
    int stack[101]={0,};
    for(int i=0;i<10;i++){
      scanf("%d",&num[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<10;i++){
      stack[num[i]]++;
    }
    puts("----------분포 그래프---------");
    for(j=0;j<100;j+=k){
      if(j+k<100){
        printf("%3d~%3d : ",j,j+k-1);
      }
      else{
        printf("%3d~%3d : ",j,100);
      }
      for(int i=0;i<k;i++){
        if(i+j>100){
          break;
        }
        if(stack[i+j]>0){
          for(int n=0;n<stack[i+j];n++){
            putchar('*');
          }
        }
      }
      putchar('\n');
    }
    return 0;
}
