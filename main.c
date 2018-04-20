#include <stdio.h>

#define TARGET 3

int linearSearch(int n, int *A, int a){
  int i;

  for(i = 0; i < n; i++){
    if(A[i] == a){
      return i;
    }
  }

  return -1;
}

int main(){
  int n, i, A[100000], a = TARGET, k;

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

  k = linearSearch(n, A, a);

  if(0 <= k){
    printf("%dをA[%d]に発見\n", a, k);
  }
  else{
    printf("発見できず\n");
  }

  return 0;
}
