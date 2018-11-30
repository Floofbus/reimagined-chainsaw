// https://www.reddit.com/r/dailyprogrammer/comments/pxs2x/2202012_challenge_12_easy/
// /r/dailyprogrammer challenge #12, easy.
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


void permute(string s, int minIndex, int maxIndex)
{
    if (minIndex == maxIndex)
    {
        cout << s << "\t";
    }
    
    for (int i = minIndex; i < maxIndex; ++i)
    {
        swap(s[minIndex], s[i]);
        permute(s, minIndex+1, maxIndex);
        swap(s[minIndex], s[i]);
    }
    return;
}

int main()
{
    cout << "Enter a string: ";
    string s;
    getline(cin, s);
    
    permute(s, 0, s.length());
    //

    cout << "Done printing permutations.\n";
    return 0;
}

// Notes
// Alright, so I don't really understnd the solution I have. I'm kinda tired of working on it
// for today, I'll need to go back and understand it a bit better.
// I know in my head what it's doing, but I can't visualize it working.
//
// It swaps the minIndex with minIndex for the very first call, swaps it back,
// and then swaps it with s[minIndex + numIterations] for every character.
// I kinda get it now?
// 
// abcd:
// swaps a with a, b with b, and c with c, minIndex now equals maxIndex, 
// so it prints the string to the screen
// next it goes back to the call to swap c with c, which then swaps c and c back
// then i would be equal to maxIndex, returning to the call to swap b with b,
// then it swaps b back with b, and then swaps b with c, then calls a permutation on that
// that would finish, it would swap b and c back, then swap b with d, and call a permutation on the remaining characters
// after that finishes, it would swap b and d back to their original places, 
// i would then be equal to maxIndex, so it would return to the call to swap a with a
// then the process would repeat, with a swapping with each character and calling a permutation
// on the remaining characters. Nice. 
 