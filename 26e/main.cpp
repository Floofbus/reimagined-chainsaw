// https://www.reddit.com/r/dailyprogrammer/comments/qzil1/3162012_challenge_26_easy/
// /r/dailyprogrammer challenge #26, easy.
#include <iostream>
#include <string>

using namespace std;


int main()
{
    cout << "Enter a string to remove consecutive duplicates from: ";
    string in;
    getline(cin, in);
    
    string duplicates;
    char last = ' ';
    for (int i = 0; i < in.length(); ++i)
    {
        if (in[i] == last)
        {
            last = in[i];
            duplicates += in[i];
            in.replace(i, 1, "");
            --i; // Since we're removing a character, we need to re-check the index
            continue;
        }
        last = in[i];
    }
    
    cout << "Input with duplicates removed: " << in << "\n";
    cout << "Duplicates: " << duplicates << endl;
    
    return 0;
}

// Notes:
// Okay, another pretty easy one today. If everything keeps being easy, I may need to move to intermediate.
// The approach I took iterated over every character of the input string and checked it against the last,
// if they matched, I appended the current character to the duplicates string and removed it from the input
// string. Easy peasy.
// 
// Things that could be improved:
// This has a bug where if there are more than two of the same character in a row, the string with the doubles
// removed will have doubles in it still. -- Fixed
// 