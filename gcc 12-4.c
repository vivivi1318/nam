#include <stdio.h>
#include <string.h>
typedef struct{ char name[64]; int height; float weight; long schols; }Student;

int main() {
  int n,type;
  scanf("%d %d",&n,&type);
  Student std[n];
  Student temp;
  int rank[2][n];
  for(int i=0;i<n;i++){
    scanf("%s %d %f %ld",std[i].name,&std[i].height,&std[i].weight,&std[i].schols);
  }
  switch(type){
    case 0:{
      for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
          if(strcmp(std[j].name,std[j+1].name)){
            temp=std[j];
            std[j]=std[j+1];
            std[j+1]=temp;
          }
        }
      }
      break;
    }
    case 1:{
      for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
          if(std[j].height<std[j+1].height){
            temp=std[j];
            std[j]=std[j+1];
            std[j+1]=temp;
          }
        }
      }
      break;
    }
    case 2:{
      for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
          if(std[j].schols<std[j+1].schols){
            temp=std[j];
            std[j]=std[j+1];
            std[j+1]=temp;
          }
        }
      }
      break;
    }
  }
  for(int i=0;i<n;i++){
    printf("%-10s%6d%6.1f%7ld\n",std[i].name,std[i].height,std[i].weight,std[i].schols);
  }
  
  return 0;
}
