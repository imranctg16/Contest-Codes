#include<bits/stdc++.h>
using namespace std;


// You could also take an existing vector as a parameter.
vector<string> split(string str, char delimiter) {
  vector<string> internal;
  stringstream ss(str); // Turn the string into a stream.
  string tok;

  while(getline(ss, tok, delimiter)) {
    internal.push_back(tok);
  }

  return internal;
}

int main() {

  string str;
  cout<<"Enter a string\n";
  cin>>str;

  vector<string> sep = split(str,',');

  // If using C++11 (which I recommend)
  /* for(string t : sep)
   *  cout << t << endl;
   */

  for(int i = 0; i < sep.size(); ++i)
    cout << sep[i] << endl;
}
