#include <bits/stdc++.h>
using namespace std;

int main() {

	int t,number,save;
	cin>>t;
	while(t--)
	{
		cin>>number;
		if(!number)
        {
            cout<<"1\n";
            continue;
        }
		save=log10(number)+1;
		cout<<save<<endl;
	}
	return 0;
}
