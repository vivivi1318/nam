#include <stdio.h>
#include <stdlib.h>
int reset_array(int *v, int i, int j, int k,int n){
  for(int m=0;m<=n;m++){
    if(m>=i&&m<=j){
      continue;
    }
    else{
      v[m]=k;
    }
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
  int s=reset_array(v, i, j, k,n);
  for(int m=0;m<n;m++){
    printf("%d\n",v[m]);
  }
  return 0;
}
