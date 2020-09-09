#include <iostream>
#include <cmath>

using namespace std;

long int factorial( double value )
{
  int result = 1;
  for ( int i = value ; i >= 1 ; i-- )
    {
      result *= i;
    }
  return result;
}

int main()
{
  double x = 4;
  int n = 14;
  long double sum = 0;
  long double term;
  for ( double i = 0 ; i <= n ; i++ )
    {
      term = pow( x , i )/factorial( i );
      sum += term;
      cout << "i = " << i << " , " << "term = " << term << " , " << "sum = "
	   << sum << endl;
    }
  cout << sum << endl;

  return 0;
}
