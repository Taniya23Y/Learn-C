/* write a program to print fibonacci series */
/*******************************************************
 * statement = fibonacci series (0, 1, 1, 2, 3, 5, 8, 13, 21)
 * prohrammer name = taniya yadav
********************************************************/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t1 = 0, t2 = 1, nextTerm = 0, num;
  printf("Enter a positive number: ");
  scanf("%d", &num);

  // displays the first two terms which is always 0 and 1
  printf("Fibonacci Series: %d, %d, ", t1, t2);
  nextTerm = t1 + t2;

  while (nextTerm <= num) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  } 
    return 0;
}
