// exercise questions from (yashwant kanethkar [5th edition book]).
#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*char suite = 3 ; 
 switch ( suite ) 
 { 
 case 1 : 
 printf ( "\nDiamond" ) ;            question = 1
 case 2 : 
 printf ( "\nSpade" ) ; 
 default : 
 printf ( "\nHeart") ; 
 } 
printf ( "\nI thought one wears a suite" );  */

/*int c = 3 ; 
 switch ( c ) 
 { 
 case 'v' : 
 printf ( "I am in case v \n" ) ; 
 break ; 
 case 3 : 
 printf ( "I am in case 3 \n" ) ;    question = 2
 break ; 
 case 12 : 
 printf ( "I am in case 12 \n" ) ; 
 break ; 
 default : 
 printf ( "I am in default \n" ) ; 
 }   */

 /*int k, j = 2 ; 
 switch ( k = j + 1 ) 
 { 
 case 0 : 
 printf ( "\nTailor") ; 
 case 1 :                   question = 3
 printf ( "\nTutor") ; 
 case 2 : 
 printf ( "\nTramp") ; 
 default : 
 printf ( "\nPure Simple Egghead!" ) ; 
 }      */

 /*int i = 0 ; 
 switch ( i ) 
 { 
 case 0 : 
 printf ( "\nCustomers are dicey" ) ; 
 case 1 :                                    question = 4
 printf ( "\nMarkets are pricey" ) ; 
 case 2 : 
 printf ( "\nInvestors are moody" ) ; 
 case 3 : 
 printf ( "\nAt least employees are good" ) ; 
 } */

/*int k;
float j = 2.1;
switch ( k = j + 1 ) 
 { 
 case 3 : 
 printf ( "\nTrapped" ) ;     question = 5
 break ; 
 default : 
 printf ( "\nCaught!" ) ; 
 }    */

 /*int ch = 'a' + 'b' ; 
 switch ( ch ) 
 { 
 case 'a' : 
 case 'b' : 
 printf ( "\nYou entered b" ) ; 
 case 'A' :                            question = 6
 printf ( "\na as in ashar" ) ; 
 case 'b' + 'a' : 
 printf ( "\nYou entered a and b" ) ; 
 } */

 /*int i = 1 ; 
 switch ( i - 2 ) 
 { 
 case -1 : 
 printf ( "\nFeeding fish" ) ; 
 case 0 : 
 printf ( "\nWeeding grass" ) ;        question = 7
 case 1 : 
 printf ( "\nmending roof" ) ; 
 default : 
 printf ( "\nJust to survive" ) ;
 }*/


 /*int suite = 1 ; 
 switch ( suite ) ; 
 { 
 case 0 ; 
 printf ( "\nClub" ) ;      question = 8
 case 1 ; 
 printf ( "\nDiamond" ) ; 
 } */

 
 /*int temp ; 
 scanf ( "%d", &temp ) ; 
 switch ( temp ) 
 { 
 case ( temp <= 20 ) : 
 printf ( "\nOoooooohhhh! Damn cool!" ) ; 
 case ( temp > 20 && temp <= 30 ) : 
 printf ( "\nRain rain here again!" ) ;          question = 9
 case ( temp > 30 && temp <= 40 ) : 
 printf ( "\nWish I am on Everest" ) ; 
 default : 
 printf ( "\nGood old nagpur weather" ) ; 
 }  */

/*float a = 3.5;
switch(a)
{ 
 case 0.5 : 
 printf ( "\nThe art of C" ) ;     question = 10
 break ; 
 case 1.5 : 
 printf ( "\nThe spirit of C" ) ; 
 break ; 
 case 2.5 : 
 printf ( "\nSee through C" ) ; 
 break ; 
 case 3.5 : 
 printf ( "\nSimply c" ) ; 
 }  */

/*int a = 3, b = 4, c ; 
 c = b – a ; 
 switch ( c ) 
 { 
 case 1 || 2 : 
 printf ( "God give me an opportunity to change things" ) ; 
 break ;                                                      question = 11
 case a || b : 
 printf ( "God give me an opportunity to run my show" ) ; 
 break ; 
 }    */

int choice ; 
 while ( 1 ) 
 { 
 printf ( "\n1. Factorial" ) ; 
 printf ( "\n2. Prime" ) ; 
 printf ( "\n3. Odd/Even" ) ; 
 printf ( "\n4. Exit" ) ; 
 printf ( "\nYour choice? " ) ; 
 scanf ( "%d", &choice ) ; 
 switch ( choice ) 
 { 
 case 1 : 
 /* logic for factorial of a number */ 
 break ; 
 case 2 : 
 /* logic for deciding prime number */ 
 break ; 
 case 3 : 
 /* logic for odd/even */ 
 break ; 
 case 4 : 
 exit(0) ; 
 } 
 } 
return 0;
}
