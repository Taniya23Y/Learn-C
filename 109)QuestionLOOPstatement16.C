// continue statement
/*
question of products
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, num, product;
    for ( i = 1; i <= 4; ++i)
    {
        printf("Enter the num %d: ", i);
        scanf("%d", &num);
        if(num == 0)
        {
            continue; /*in this program, when num equals to zero, it skips 
                       the statement product*=num and continue the loop.*/
            product*=num;
        }
    }
    printf("product = %d", product);

    return 0;
}
