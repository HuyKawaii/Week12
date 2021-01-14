#include <stdio.h>

int main(){
  int n, i, j, k;
  printf("Enter size of array: ");
  scanf("%d", &n);
  int a[n];
  printf("Enter array\n");
  for (i = 0; i < n; i++){
    printf("a[%d] = ",i+1);
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n; i++)
    for (k = 0; k < n - i; k++){
      for (j = i; j <= i+k; j++)
        printf("%d ", a[j]);
      printf("\n");
    }
  return 0;
}
