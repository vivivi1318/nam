#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int set_array(int *v, int i, int j, int k){
  for(int m=i;m<=j;m++){
    v[m]=k;
  }
  return v[0];
}

int main() {

  int n,i,j,k;
  scanf("%d %d %d %d",&n,&i,&j,&k);
  int v[n];
  for(int m=0;m<n;m++){
    scanf("%d",&v[m]);
  }
  int s=set_array(v, i, j, k);
  for(int m=0;m<n;m++){
    printf("%d\n",v[m]);
  }
  return 0;
}
