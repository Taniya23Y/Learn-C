/*Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at the rate of Rs. 12.00 per hour for every 
hour worked above 40 hours. Assume that employees do not 
work for fractional part of an hour.*/
/********************************************************
 * statement = while loop is used.
 * programmer name = taniya yadav
**********************************************************/

#include<stdio.h>
#include<conio.h>
int main()
{
    /*int count = 1, working_hours, over_time;
    float over_time_pay;

    while(count<=10)
    {
        printf("Enter the working hours of employee no %d: ", count);
        scanf("%d", &working_hours);
        if(working_hours>40)
        {
            over_time = working_hours - 40;
            over_time_pay = over_time * 12.00;
            printf("Employee No %d overtime pay is %.2f\n", count, over_time_pay);
        }
        else
            printf("You have to work for more than 40 hours to get overtime pay\n");

        count++;
    }
    */
    int i,hr, bonus;
	for(i = 1 ; i <= 10 ; i++) 
	{
		printf("\nEnter the working hour of the employ : ");
		scanf("%d", &hr);
		
		if(hr>40)
		{
			bonus = (hr - 40)*12;
			printf("%d Rs. is the bonus of the employ.\n", bonus);
		}
		else
			printf("This employ has not done overtime.\n");
	}
	getch();
    return 0;
}
