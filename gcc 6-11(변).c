#include <stdio.h>

int rotate_intary(int v[], int n, int k){

  if(k>=0){
	  for(int j=0;j<k;j++){
		int temp=v[n-1];
		for(int i=n-2;i>=0;i--){
		  v[i+1]=v[i];
		}
		v[0]=temp;
	  }
  }
  else{
    k=-k;
    for(int j=0;j<k;j++){
      int temp=v[0];
      for(int i=0;i<n-1;i++){
        v[i]=v[i+1];
      }
      v[n-1]=temp;
	  }
  }
  return 0;
}



int main(void) {
  int n,k,p;
  scanf("%d %d",&n,&k);
  int v[n];

  for(int i=0;i<n;i++){
    scanf("%d",&v[i]);
  }
  p = rotate_intary(v,n,k);
  for(int i=0;i<n;i++){
    printf("%d ",v[i]);
  }
  return 0;
}
