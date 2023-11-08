/*Two-Dimension Array in c*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int student[4][2];
    int i;

    for (i = 0; i <= 3; i++)
    {
        printf("\n Enter roll no. and marks: "); 
        scanf("%d %d", &student[i][0], &student[i][1]); 
    } 
    for (i = 0; i <= 3; i++)
    { 
        printf("\n%d %d", student[i][0], student[i][1]);
    }
    
    return 0;
}
