// https://www.reddit.com/r/dailyprogrammer/comments/qit0h/352012_challenge_18_easy/
// /r/dailyprogrammer challenge #18, easy.
#include <iostream>
#include <string>

using namespace std;


int main()
{
    
    cout << "Input: ";
    string in;
    getline(cin, in);
    
    in.insert(9, "-");
    
    for (int i = 6; i < in.length(); ++i)
    {
        if (in[i] == '-')
            continue;
        
        
        if (in[i] == 'A' || in[i] == 'B' || in[i] == 'C')
            in[i] = '2';
        else if (in[i] == 'D' || in[i] == 'E' || in[i] == 'F')
            in[i] = '3';
        else if (in[i] == 'G' || in[i] == 'H' || in[i] == 'I')
            in[i] = '4';
        else if (in[i] == 'J' || in[i] == 'K' || in[i] == 'L')
            in[i] = '5';
        else if (in[i] == 'M' || in[i] == 'N' || in[i] == 'O')
            in[i] = '6';
        else if (in[i] == 'P' || in[i] == 'Q' || in[i] == 'R' || in[i] == 'S')
            in[i] = '7';
        else if (in[i] == 'T' || in[i] == 'U' || in[i] == 'V')
            in[i] = '8';
        else if (in[i] == 'W' || in[i] == 'X' || in[i] == 'Y' || in[i] == 'Z')
            in[i] = '9';
    }
    
    cout << "Output: " << in << endl;
    return 0;
}

// Notes:
// Another pretty easy one today. I really need to brush up on type conversion.
//
// Things that could be improved:
// This is currently replacing characters with characters. I could have taken the approach
// of just using a stringstream to construct the number that I needed, and that would offer
// me more versatility, but I decided to do it the easy way today.