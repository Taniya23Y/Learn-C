// Array in c
//Merge sort

#include <stdio.h>

void merge(int *arr, int start, int end){
   int mid = (start + end) / 2;
   int len1 = mid - start + 1;
   int len2 = end - mid;

   int *first = &arr[len1];
   int *second = &arr[len2];

   // copy karo
   int mainArrayIndex = start;
   for (int i = 0; i < len1; i++)
   {
      first[i] = arr[mainArrayIndex++];
   }


   mainArrayIndex = mid + 1;
   for (int i = 0; i < len2; i++)
   {
     second[i] = arr[mainArrayIndex++];
   }
   
   //merge 2 sorted array
   int index1 = 0;
   int index2 = 0;
   mainArrayIndex = start;

   while (index1 < len1 && index2 < len2) {
      
      if (first[index1] < second[index2]) {
         arr[mainArrayIndex++] = first[index1++];
      }
      else{
         arr[mainArrayIndex++] = second[index2++];
      }
   }

   while (index1 < len1) {
      arr[mainArrayIndex++] = first[index1++];
   }
   
   while (index2 < len2) {
      arr[mainArrayIndex++] = second[index2++];
   }
}

// make a recurssive function for merge sort.
void mergeSort(int arr[], int start, int end){
  
     // base case
     if (start >= end){
        return ;
     }

     int mid =  (start + end)/2;   //(start + ((end - start) / 2));
     // left wala karo
     mergeSort(arr, start, mid);
     // right wala karo
     mergeSort(arr, mid+1, end);

     //merge
     merge(arr, start, end);
}

int main() {
    
   int arr[5] = {2,89,45,23,-1};
   // int arr_size = sizeof(arr)/ sizeof(arr[0]);
   int n = 5;
   
   printf("Enter the elements which to be sort: ");
    for(int i=0; i < n; i++){
         scanf("%d",&arr[i]);
    }
 
   mergeSort(arr, 0, n-1);
   //printf("Sorted list in ascending order:\n", arr);
   for (int i = 0; i < n; i++)
   {
      printf("%d", arr[i]);
   } 
   // printf("Sorted list in ascending order:\n", arr);
return 0;
}