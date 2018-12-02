// https://www.reddit.com/r/dailyprogrammer/comments/q2v2k/2232012_challenge_14_easy/
// /r/dailyprogrammer challenge #14, easy.
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


void reverse(string& s)
{
    if (s.length() == 1 || s.length() == 0)
        return;
    
    // We only need to swap n/2 times if even, and (n-1)/2 times when odd
    int numIterations;
    if (s.length() % 2 == 0)
        numIterations = s.length() / 2;
    else
        numIterations = (s.length() - 1) / 2;
    
    
    for (int i = 0; i < numIterations; ++i)
    {
        swap(s[i], s[s.length() - 1 - i]);
    }
    return;
}

void blockReverse(string &s, int blockSize)
{
    if (blockSize > s.length() || blockSize == 1 || blockSize == 0)
        return;
    
    // Figure out how many blocks we need
    int numBlocks;
    int trailBlockLength(0);
    if (s.length() % blockSize != 0)
        trailBlockLength = s.length() % blockSize;
    numBlocks = s.length() / blockSize;
    
    string out("");
    // call reverse for each substr of size blockSize
    for (int i = 0; i < numBlocks; ++i)
    {
        string temp = s.substr(i * blockSize, blockSize);
        reverse(temp);
        out += temp;
    }
    
    if (trailBlockLength)
    {
        string temp = s.substr((numBlocks * blockSize), trailBlockLength);
        out += temp;
    }
    s = out;
    return;
}

int main()
{   
    //
    //
    cout << "Enter a string to reverse: ";
    string input;
    getline(cin, input);
    cout << "Before:\t" << input << "\n";
    blockReverse(input, 6);
    cout << "After:\t" << input << endl;
    return 0;
    
}

// Notes:
// Oh no, I did the challenge wrong the first time. I thought the challenge was to
// reverse the entire array. But this wants me to actually reverse n indicies of a given array.
// So it wants to me to do stuff like
// 1, 2, 3, 4, 5, 6, 7 (assume a block size of 2)
// 2, 1, 4, 3, 6, 5, 7
// I can reuse my code!
// I have rewritten my code to do the proper thing. It wasn't defined how we were supposed to
// handle block sizes that didn't divide evenly into the size of the array, so I decided to leave
// the remainder alone for dealing with later.
// 
// Things that could be improved:
// There's probably a built in way to reverse strings. There is. std::reverse
// We could have used that instead of writing our own reverse function, however, it would be easy
// to replace the one we have with that.