// gate question 2014
// #include<stdio.h>
// int main(int argc, char *argv[])
// {
//  int a[3][3][3] =
//  {{1, 2, 3, 4, 5, 6, 7, 8, 9},
//  {10, 11, 12, 13, 14, 15, 16, 17, 18},
//  {19, 20, 21, 22, 23, 24, 25, 26, 27}};
//  int i = 0, j = 0, k = 0;
//  for( i = 0; i < 3; i++ ){
//  for(k = 0; k < 3; k++ )
//  printf("%d ", a[i][j][k]);
//  printf("\n");
//  }
//  return 0;
// }

// 
// #include<stdio.h>
// int main(int argc, char *argv[])
// {
//  int x = 1, z[2] = {10, 11};
//  int *p = NULL;
//  p = &x;
//  *p = 10;
//  p = &z[1];
//  *(&z[0] + 1) += 3;
//  printf("%d, %d, %d\n", x, z[0], z[1]);
//  return 0;
// }
 
 #include <stdio.h>
int main() 
{ 
 int arr[] = { 10, 20, 36, 72, 45, 36 }; 
 int *j, *k; 
 j = &arr [4]; 
 k = (arr + 4); 

 if (j == k) 
 printf("\nThe two pointers point to the same location\n\n"); 
 else 
 printf("\nThe two pointers do not point to the same location\n"); 

 return 0;
} 