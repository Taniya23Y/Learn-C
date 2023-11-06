//Array in c
// Binary serach 

#include <stdio.h>

int binarySearch(int array[], int key, int start, int end) {
  // Repeat until the pointers low and high meet each other
  while (start <= end) {
    int mid = start + (end - start) / 2;

    if (array[mid] == key){
      return mid;
    }

    if (array[mid] < key){
      start = mid + 1;
    }
    else{
      end = mid - 1;
    }
  }
  return -1;
}

int main() {
  int array[] = {23,34,45,56,67,78,89,90};
  int n = sizeof(array) / sizeof(array[0]);
  int key = 89;
  int result = binarySearch(array, key, 0, n - 1);
  if (result == -1){
    printf("Not found");
  }
  else{
    printf("Element is found at index %d", result);
  }
  
return 0;
}