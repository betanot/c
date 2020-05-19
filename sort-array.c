#include <stdio.h>

int main() {
  int a[100], n, i, j;
  printf("Array size: ");
  scanf("%d", &n);
  printf("Elements: ");

  for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

// Ascending
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      if(a[j] > a[i]) {
	int tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
      }
    }
  }
  printf("\nAscending : ");
  for(i=0; i<n; i++) {
    printf(" %d ", a[i]);
  }

// Descending
  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      if(a[j] < a[i]) {
	int tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
      }
    }
  }
  printf("\n\nDescending : ");
  for(i=0; i<n; i++) {
    printf(" %d ", a[i]);
  }

  printf("\n");
  return 0;
}
