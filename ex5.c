#include <stdio.h>

void revereArray(int a[], int size){
  int i = 0, j = size - 1, x;
  while (i < j){
    x = a[i];
    a[i] = a[j];
    a[j] = x;
    i++; j--;
  }
}

void revereArray2(int *a, int size){
  int i = 0, j = size - 1, x;
  while (i < j){
    x = *(a+i);
    *(a+i) = *(a+j);
    *(a+j) = x;
    i++; j--;
  }
}

int main(){
  int n;
  printf("Enter size of array: ");
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n;  i++){
    printf("a[%d] = ", i+1);
    scanf("%d", &a[i]);
  }
  revereArray2(a, n);
  printf("The reversed array is\n"); 
  for (int i = 0; i < n; i++)
    printf("a[%d] = %d\n", i+1, a[i]);
  return 0;
}
