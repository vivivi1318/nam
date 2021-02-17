#include <stdio.h>

int rev_intary(int v[], int n){
  int temp;
  for(int i=0;i<n/2;i++){
    temp=v[i];
    v[i]=v[n-1-i];
    v[n-1-i]=temp;
  }
  return 0;
}
int main(void) {
  int n;
  int p;
  scanf("%d",&n);
  int v[n];
  
  for(int i=0;i<n;i++){
    scanf("%d",&v[i]);
  }
  p = rev_intary(v,n);
  for(int i=0;i<n;i++){
    printf("%d ",v[i]);
  }
  return 0;
}
