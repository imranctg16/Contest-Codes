#include <algorithm>
#include <string>
#include <iostream>
 using namespace std;

int main()
{
    string s = "abcd";
    sort(s.begin(), s.end());
    do {
        cout << s << "\n";
    } while(next_permutation(s.begin(), s.end()));
}
