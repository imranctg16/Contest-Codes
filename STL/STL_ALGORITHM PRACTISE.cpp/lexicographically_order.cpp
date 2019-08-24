#include <iostream>
using std::cout;
using std::endl;

#include <algorithm>
#include <vector>
#include <iterator>

int main()
{
   char c1[ 10 ] = "HELLO";
   char c2[ 10 ] = "BYE BYE";

   // perform lexicographical comparison of c1 and c2
   bool result = std::lexicographical_compare( c1, c1 + 10, c2, c2 + 10 );
   cout << c1 << ( result ? " is less than " :
      " is greater than or equal to " ) << c2 << endl;

   return 0;
}
