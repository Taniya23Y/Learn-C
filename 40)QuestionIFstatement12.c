/* Write a program to calculate the salary as per the 
following table: 
Gender ----Years of Service ---------Qualifications ------- Salary 
Male   ---->= 10            ---------Post-Graduate  ------- 15000 
           >= 10            ---------Graduate       ------- 10000 
           < 10             ---------Post-Graduate  ------- 10000 
           < 10             ---------Graduate       ------- 7000 

Female ---->= 10            ---------Post-Graduate  ------- 12000 
           >= 10            ---------Graduate       ------- 9000 
           < 10             ---------Post-Graduate  ------- 10000 
           < 10             ---------Graduate       ------- 6000        */
/************************************************
 * statement = else if ladder
 * programmer name = taniya yadav
****************************************************/
 
 #include <stdio.h>
 int main()
 {
    char g; // g= gender
    int yos, qual, sal; //yos=year of service and qual=qualification and sal=salary 

    printf ( "Enter Gender, Years of Service and Qualifications ( 0 = G, 1 = PG ):");
                                                        // G=graduate
                                                        // PG=post graduate 
    scanf ( "%c\n %d\n %d\n", &g, &yos, &qual ); 

    if( g == 'm' && yos >= 10 && qual == 1 ) 
    {
         sal = 15000;
    } 
    else if (( g == 'm' && yos >= 10 && qual == 0 ) || ( g == 'm' && yos < 10 && qual == 1 )) 
    {
          sal = 10000;
    } 
    else if ( g == 'm' && yos < 10 && qual == 0 ) 
    {
          sal = 7000; 
    }
    else if ( g == 'f' && yos >= 10 && qual == 1 ) 
    {
          sal = 12000;
    } 
    else if ( g == 'f' && yos >= 10 && qual == 0 ) 
    { 
          sal = 9000;
    } 
    else if ( g == 'f' && yos < 10 && qual == 1 ) 
    {
          sal = 10000;
    } 
    else if ( g == 'f' && yos < 10 && qual == 0 ) 
    {
         sal = 6000;
    }

     printf ( "\nSalary of Employee = %d", sal ); 

   return 0;

}




 