// https://www.reddit.com/r/dailyprogrammer/comments/pu1rf/2172012_challenge_9_easy/
// /r/dailyprogrammer challenge #9, easy.
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    cout << "Enter some characters: ";
    
    string in;
    getline(cin, in);
    sort(in.begin(), in.end());
    
    while (in[0] == ' ')
    {
        in.erase(in.begin());
    }
    
    cout << "Sorted characters: " << in << endl;
    return 0;
}

// Notes:
// This one was pretty easy today.
// I could've implemented my own sort function, but I wouldn't have done that for this.
// So I didn't.
// 
// Things that could be improved:
// This treats upper and lower case letters as different characters, so it will sort in
// the following order: numerical, uppercase alphabetical, lowercase alphabetical
