// https://www.reddit.com/r/dailyprogrammer/comments/qr0hg/3102012_challenge_22_easy/
// /r/dailyprogrammer challenge #22, easy.
#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
    vector<string> i1 {"a", "b", "3", "5"};
    vector<string> i2 {"a", "b", "34", "4"};
    
    // For every element of i2 check to see if it exists in i1
    // if not, append it to i1
    for (int i = 0; i < i2.size(); ++i)
    {
        bool found = false;
        for (int j = 0; j < i1.size(); ++j)
        {
            if (i2[i] == i1[j])
            {
                found = true;
                break;
            }
        }
        
        if (!found)
            i1.push_back(i2[i]);
    }
    
    for (int i = 0; i < i1.size(); ++i)
        cout << i1[i] << endl;
    
    return 0;
}

// Notes:
// This is kinda a half assed one. This challenge kinda assumed that you would be able to
// make a vector that held multiple data types in your language of choice, C++ cannot do
// that normally, so you would likely end up with a hacky implementation of it. I chose to
// store all data as a string due to there being functions to convert strings to different
// data types.
// 
// Things that could be improved:
// Obviously, implementing some kind of system that holds multiple data types as a vector.
// One approach of doing this would be to write a class that had a vector of string, int pairs
// the number in the pair would signify what data type it was supposed to be, and you could only
// allow access via the class member function. It would be bootleg.