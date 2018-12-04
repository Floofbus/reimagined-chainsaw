// https://www.reddit.com/r/dailyprogrammer/comments/q8aom/2272012_challenge_16_easy/
// /r/dailyprogrammer challenge #16, easy.
#include <iostream>
#include <string>

using namespace std;


int main()
{
    cout << "Enter a base string: ";
    string in;
    getline(cin, in);
    
    cout << "Enter characters to remove from the base string: ";
    string sub;
    getline(cin, sub);
    // for every character in the sub string
    for (int i = 0; i < sub.length(); ++i)
    {
        for (int j = 0; j < in.length(); ++j)
        {
            cout << in.length();
            if (in[j] == sub[i])
            {
                in.erase(j, 1);
                --j; // Recheck the same index;
            }
        }
    }
    
    cout << in;
    return 0;
}

// Notes:
// Okay, another pretty easy one today.
// Pretty self explanatory, just checking one string against another, and if
// there's a match, erase that character from the string.
//
// How this could be improved:
// I saw some people using string.replace() to just replace the character with an empty character.
// I'm not entirely sure if this could cause issues if the string resized itself in memory and the
// memory the program would be checking against put a coincidental character in there.