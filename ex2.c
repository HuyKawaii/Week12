#include <stdio.h>
#include <float.h>
#include <stdlib.h>

double* maximum(double *a, int size);

int main(){
  double a[99];
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    a[i] = rand();
    printf("a[%d] = %lf\n",i+1, a[i]);
  }
  printf("The pointer to the maximum value of the array: %p\n", maximum(a, n));
  return 0;
}

double* maximum(double *a, int size){
  double max = DBL_MIN;
  double *point;
  for (int i = 0; i < size; i++)
    if (max < *(a+i)){ 
      max = *(a+i);
      point = a+i;
    }
  return point;
}
