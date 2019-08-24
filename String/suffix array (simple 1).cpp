#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;


void search(char *pat, char *txt, int *suffArr)
{
    int m = strlen(pat);  // get length of pattern, needed for strncmp()
    // Do simple binary search for the pat in txt using the
    // built suffix array
    int l = 0, r = n-1;  // Initilize left and right indexes
    while (l <= r)
    {
        // See if 'pat' is prefix of middle suffix in suffix array
        int mid = l + (r - l)/2;
        int res = strncmp(pat, txt+suffArr[mid], m);

        // If match found at the middle, print it and return
        if (res == 0)
        {
            cout << "Pattern found at index " << suffArr[mid];
            return;
        }

        // Move to left half if pattern is alphabtically less than
        // the mid suffix
        if (res < 0) r = mid - 1;

        // Otherwise move to right half
        else l = mid + 1;
    }

    // We reach here if return statement in loop is not executed
    cout << "Pattern not found";
}





int main()
{
    string s;
    map<string,int> m;
    cin >> s;
    vector<string> v;
    for(int i = 0; i < s.size();i++)
    {
        m[s.substr(i,s.size()-i)] = i;
        v.push_back(s.substr(i,s.size()-i));
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < v.size();i++)
    {
        cout << m[v[i]] << endl;
    }


    return 0;
}
