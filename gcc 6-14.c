#include <stdio.h>

int search_idx(const int v[], int idx[], int key, int n){
  int count=0;
  for(int i=0;i<n;i++){
    if(v[i]==key){
      idx[count]=i;
      count++;
    }
  }
  return count;
}
int main(void) {
  int n,key,stack;
  int idx[100]={0,};
  scanf("%d %d",&n,&key);
  int v[n];
  
  for(int i=0;i<n;i++){
    scanf("%d",&v[i]);
  }
  stack = search_idx(v,idx,key,n);
  if(stack==0){
    printf("-1");
  }
  else{
    for(int i=0;i<stack;i++){
      printf("%d ",idx[i]);
    }
  }
  return 0;
}
