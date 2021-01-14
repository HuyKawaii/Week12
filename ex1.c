#include <stdio.h>
#include <stdlib.h>

int countEven(int *a, int i);

int main(){
  int ar[99], n;
  printf("Enter the number of integers in the array: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++){
    ar[i] = rand();
    printf("a[%d] = %d\n", i+1, ar[i]);
  }
  printf("The number of even integers in the array is: %d\n",countEven(ar, n));
  return 0;
}

int countEven(int *a, int i){
  int count = 0;
  for (int k = 0; k < i; k++)
    if (*(a + k) % 2 == 0) 
      count ++;
  return count;
}
