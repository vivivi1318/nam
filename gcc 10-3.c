#include <stdio.h>

int sort_array(int *v, int m,int n){
  int temp;
  
  if(m){
    for(int i=0;i<n-1;i++){
      for(int j=0;j<n-i-1;j++){
        if(v[j]<v[j+1]){
          temp = v[j];
          v[j]=v[j+1];
          v[j+1]=temp;
        }
      }
    }
  }
  else{
    for(int i=0;i<n-1;i++){
      for(int j=0;j<n-i-1;j++){
        if(v[j]>v[j+1]){
          temp = v[j];
          v[j]=v[j+1];
          v[j+1]=temp;
        }
      }
    }
  }
  return temp;
}

int main() {
  int n,m;
  scanf("%d %d",&n,&m);
  int v[n];
  for(int i=0;i<n;i++){
    scanf("%d",&v[i]);
  }
  int s = sort_array(&v[0], m,n);
  for(int i=0;i<n;i++){
    printf("%d\n",v[i]);
  }
  return 0;
}
