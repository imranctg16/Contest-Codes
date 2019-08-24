#include <vector>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main()
{
    string str("Split me by whitespaces");
    string buf; // Have a buffer string
    stringstream ss(str); // Insert the string into a stream
    vector<string> tokens; // Create vector to hold our words
    while (ss >> buf)
	{
			cout<<buf<<endl;
			tokens.push_back(buf);


	}

}
