#include<iostream>
using namespace std;

// Returns value of Binomial Coefficient C(n, k)
unsigned long int binomialCoeff(unsigned int n, unsigned int k)
{
    unsigned long int res = 1;

    // Since C(n, k) = C(n, n-k)
    if (k > n - k)
        k = n - k;

    // Calculate value of [n*(n-1)*---*(n-k+1)] / [k*(k-1)*---*1]
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

// A Binomial coefficient based function to find nth catalan
// number in O(n) time
 long int catalan(int n)
{
    // Calculate value of 2nCn
    long int c = binomialCoeff(2*n, n);
    // return 2nCn/(n+1)
    return c/(n+1);
}

// Driver program to test above functions
int main()
{
	int n,i=0;
	while(cin>>n)
	{
		if(i==1)
			cout<<endl;
		cout << catalan(n)<<endl;
	    i=1;
	}
    return 0;
}
