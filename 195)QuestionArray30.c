// Average value

#include <stdio.h>

double getAverage(int arr[], int size);   // function declaration

int main(int argc, char const *argv[])
{
    /*An int array with 5 element */
    int balance[5] = {1000,2,33,17,50};
    double avg;

    /*pass pointer to the average as an argument*/
    avg = getAverage(balance,5);                              // function call

    /* output the returned value*/
    printf("Average value is :%f\n", avg);

    return 0;
}

double getAverage(int arr[], int size)   // function definition
{

int i;
double avg;
double sum;

//for loop
for ( i = 0; i < size; ++i)
{
    sum += arr[i];
}

avg = sum / size;

return avg;
}
