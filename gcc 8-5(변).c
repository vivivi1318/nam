#include <stdio.h>

int main() {
  int a;
  scanf("%d",&a);
  int score[a];
  for(int l=0;l<a;l++){
    scanf("%d",&score[l]);
    if(score[l]<1||score[l]>100){
      l--;
    }
  }
  for(int i=0;i<a;i++){
    for(int j=0;j<a-i-1;j++){
      if(score[j]<score[j+1]){
        int temp=score[j];
        score[j]=score[j+1];
        score[j+1]=temp;
      }
    }
  }
  double top = a*0.3;
  int k=(int)top;
  for(int i=0;i<k;i++){
    printf("%d ",score[i]);
  }



  return 0;
}
