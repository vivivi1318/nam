#include <stdio.h>

int k_min_of(const int v[], int n, int k){
  int temp =0;
  int m[n];
  for(int c=0;c<n;c++){
    m[c]=v[c];
  }
  for(int i=0;i<n-1;i++){
    for(int j=0; j<n-i-1;j++){
      if(m[j]>m[j+1]){
        temp = m[j];
        m[j] = m[j+1];
        m[j+1] = temp;
      }
    }
  }

  return m[k-1];
}
int main(void) {
  int n,k;
  scanf("%d %d",&n,&k);
   int v[n];
  for(int i=0;i<n;i++){
    scanf("%d",&v[i]);
  }
  printf("%d",k_min_of(v,n,k));
  return 0;
}
