// This program is calling a function raiseToPow.

#include <iostream>
using namespace std;

//Function declaration
double raiseToPow ( double , int );

main ( )
{ 
    double x ;
    int i ;
    cout << " Please enter the number " ;
    cin >> x ; 
    cout << " Please enter the integer power that you want this  number raised to " ; 
    cin >> i ; 
    cout << x << " Raise to power " << i << " is equal to " << raiseToPow ( x , i ) ;  
}

double raiseToPow ( double x , int power )
 {
  double result ;
  int i ;
  result = 1.0 ;

  for ( i = 1 ; i <= power ; i ++ ) 
  {
   result *= x ; // same as result  = result  * x
//   cout<<x<<" Raise to power "<<i<<" is "<<"    : "<<result<<endl;
  }
  return ( result );
 } 
