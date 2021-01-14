#include <stdio.h>

void getSale(int *a, int size){
  int i;
  for (i = 0; i < size; i++){
    printf("Enter the sales figures number %d: ",i+1);
    scanf("%d", a + i);
  }
}

long totalSale(int *a, int size){
  int i;
  long total = 0;
  for (i = 0; i < size; i++)
    total = total + *(a + i);
  return total;
}

int main(){
  int n;
  printf("Enter the number of sale figures: ");
  scanf("%d", &n);
  int a[n];
  getSale(a, n);
  printf("Total sale is: %ld\n", totalSale(a, n));
  return 0;
}
