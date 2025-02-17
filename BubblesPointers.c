#include <stdio.h>
const int MAX=9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);

  return(0);
} // end main

void sort(int *arr, int n) {
  int *ptr1, *ptr2;
  int temp;
  for (ptr1 = arr; ptr1 < arr + n - 1; ptr1++) {
      for (ptr2 = arr; ptr2 < arr + n - (ptr1 - arr) - 1; ptr2++) {
          if (*ptr2 > *(ptr2 + 1)) {
              temp = *ptr2;
              *ptr2 = *(ptr2 + 1);
              *(ptr2 + 1) = temp;
          }
      }
  }
}