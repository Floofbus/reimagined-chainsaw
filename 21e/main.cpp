// https://www.reddit.com/r/dailyprogrammer/comments/qp3ub/392012_challenge_21_easy/
// /r/dailyprogrammer challenge #21, easy.
#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int nextNumWithSameDigits(int n)
{
    stringstream in;
    in << n;
    string nstr;
    getline(in, nstr);
    
    int current = n + 1;
    
    while (true)
    {
        string temp = to_string(current);
        
        // End early if no watch was found.
        if (nstr.length() < temp.length())
        {
            return n;
        }
        
        int numSame = 0;
        for (int i = 0; i < nstr.length(); ++i)
        {
            if (temp.find(nstr[i]) != string::npos)
                numSame++;
        }
        
        if (numSame == nstr.length())
            return current;
        
        ++current;
    }
}

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;
    
    cout << "The next highest number with the same numbers: " << nextNumWithSameDigits(n) << endl;
    return 0;
}

// Notes:
// This currently has an issue where it doesn't account for duplicate numbers. This makes incorrect results.
// There may be some more advanced logic that needs to happen here.
// I'm going to call it quits for today. An idea I had was to keep a vector of numbers signifying how many
// of that digit are in a given number, and then I would check to see if the two numbers had equal amounts
// in each of the vector members.
