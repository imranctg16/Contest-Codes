/// pascals triangle of binomial coefficient,given the power , i can know the value of all coefficient thus nCr
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void printPascal(ll n)
{
  ll arr[n][n]; // An auxiliary array to store generated pscal triangle values

  // Iterate through every line and print integer(s) in it
  for (ll line = 0; line < n; line++)
  {
    // Every line has number of integers equal to line number
    for (ll k = 0; k <= line; k++)
    {
      // First and last values in every row are 1
      if (line == k || k == 0)
           arr[line][k] = 1;
      else // Other values are sum of values just above and left of above
           arr[line][k] = arr[line-1][k-1] + arr[line-1][k];
      printf("%d ", arr[line][k]);
    }
    printf("\n");
  }
}
int main()
{
	ll n;
	while(cin>>n&&n!=0)
	{
		printPascal(n);
	}
	return 0;
}
