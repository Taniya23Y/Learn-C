// Two - Dimensional array of characters

#include<stdio.h>
#include<string.h>
#define FOUND 1
#define NOTFOUND 0

int main(){
    char masterlist[6][10] = { "akshay","parag", "raman", "srinivas", "gopal", "rajesh"};
    int i, flag, a;
    char yourname[10];
    printf("\nEnter your name: ");
    scanf("%s", yourname);

    flag = NOTFOUND;
    for(i = 0; i <= 5; i++){
        a = strcmp(&masterlist[i][0], yourname);
        if (a == 0)
        {
            // printf("Welcome, You can enter the palace!");
            flag = FOUND;
            printf("Welcome, You can enter the palace!");
            break;
        }
    }
            if (flag == NOTFOUND)
            printf("sorry, you are tarspasser");
        
    return 0;
}
