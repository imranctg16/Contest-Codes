/// can handle up to 10power10
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
vector<ll>vi;
map<int,ll>m;
set<ll>s1,s2;
ll n,t,number,counter=1,take,take2,ans;
string x;
// cout<<"Case "<<counter++<<": ";
int main() {
    map<int,bool> isFibonacci;
    isFibonacci[0] = isFibonacci[1] = true;
    unsigned long long fib0 = 1;
    unsigned long long fib1 = 1;
    for (int i = 0; i < 70; i++) {
        unsigned long long fibi = fib0+fib1;
        cout<<"\t fibi= "<<fibi<<endl;
        isFibonacci[fibi] = true;
        fib0 = fib1;
        fib1 = fibi;
    }

    int t;
    cout<<"Enter test number\n";
    cin >> t;
    while (t--) {
        unsigned long long n;
        cin >> n;
        if (isFibonacci[n])
            cout << "IsFibo" << endl;
        else
            cout << "IsNotFibo" << endl;
    }
    return 0;
}




