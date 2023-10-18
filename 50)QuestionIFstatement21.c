/* write a program for generating electricity bill. Accept last month unit and 
current month unit from user ,then calculate and print bill amount to following 
condition for units.
---) 0-100 charges 2 rs/ unit
---) 101-200 charges 3 rs/ unit
---) 201-300 charges 4 rs/ unit
---) > 300 charges 5 rs/ unit
 */
/*******************************************************
 * statement = electricity bill
 * programmer name = taniya yadav
***********************************************************/

#include <stdio.h>
// int main(int argc, char const *argv[])
// {
//      float lmu, cmu, bm,unit;
//      // taking input from user
//      printf("enter the last month unit and current month unit:");
//      scanf("%f %f", &lmu, &cmu);

//       bm = (lmu + cmu);
//      //  printf("Enter bill amount: ");
//      //  scanf("%d",&bm);
//      printf("bill amount ")

//       // conditions
//       if(unit>0 && unit<=100)
//        {     //when this statement is true
//             printf("Bill amount is: ");
//             printf("%d",unit*5);
//             //this statement is Executed otherwise
//        }
//       else if(unit>100 && unit<=200)
//        {     //when this statement is true
//             printf("Bill amount is: ");
//             printf("%d",(100*5)+(unit-100)*7);
//             //this statement is Executed otherwise
//        }
//       else if(unit >200 && unit<=300)
//        {//when this statement is true
//            printf("Bill amount is: ");
//            printf("%d",(100*5)+(100*7)+(unit-200)*10);
//            //this statement is Executed otherwise
//        }
//       else if(unit >300)
//         {  //when all statements are false
//            printf("Bill amount is: ");//consumed above 30 units
//            printf("%d",(100*5)+(100*7)+(100*10)+(unit-300)*15);
//            //this statement is Executed otherwise
//         }
//       else
//       {    //all statements are false
//            printf("No charges");
//       } //this statement is executed
     

    int electricity_bill(int units)
     {
    if (units <= 100)
    {
        return units * 2;
    }
    else if (units >=101  && units <= 200)
    {
        return units * 3;
    }
    else if (units >= 201 && units <= 300)
    {
        return units * 4;
    }
    else if(units >= 300)
    {
      return units * 5;
    }

    }

    int main()
    {
      int units;
      
return 0;
}
