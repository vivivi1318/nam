#include <stdio.h>

int mat_add_boundary(const int a[][100], int n){
  int stack=0;
  if(n>2){
    for(int i=0;i<n;i++){
      stack+=a[0][i];
      stack+=a[n-1][i];
    }
    for(int i=1;i<n-1;i++){
      stack+=a[i][0];
      stack+=a[i][n-1];
    }
  }
  else{
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      stack+=a[i][j];
    }
  }
  }
  return stack;
}

int main()
{
  int n,result;
  int a[100][100];
  scanf("%d",&n);

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      a[i][j]=(i*n)+1+j;
    }
  }
  result = mat_add_boundary(a, n);
  printf("%d",result);
  return 0;
}
