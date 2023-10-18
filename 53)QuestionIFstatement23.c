// switch statement

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,choice;
    // input
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    scanf("%d %d", &choice);

    switch (choice)
    {
      case 1:
        /* code */
        printf("enter 2 numbers:\n");
        scanf("%d %d", &a, &b);
        c = a+b;
        printf("%d", c);
        break;
    
      case 2:
        /* code */
        printf("enter 2 numbers:\n");
        scanf("%d %d", &a, &b);
        c = a-b;
        printf("%d", c);
        break;

      default:
         printf(" you have passed a wrong key");
        break;
    }

    return 0;
}
