#include <stdio.h>
#include <stdlib.h>
int set_array(int *v, int i, int j, int k){
  int sum=0;
  for(int m=i;m<=j;m++){
    sum+=v[m];
  }
  return sum;
}

int main() {

  int n,i,j,k;
  scanf("%d %d %d",&n,&i,&j);
  int v[n];
  for(int m=0;m<n;m++){
    scanf("%d",&v[m]);
  }
  int s=set_array(v, i, j, k);
    printf("%d",s);
  return 0;
}
