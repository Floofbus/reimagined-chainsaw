// https://www.reddit.com/r/dailyprogrammer/comments/pserp/2162012_challenge_8_easy/
// /r/dailyprogrammer challenge #8, easy.
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Output
{
private:
    stringstream out;
    int currentLength;
    unsigned int termWidth;
public:
    Output()
    {
        currentLength = 0;
        termWidth = 120;
    };
    ~Output(){};
    
    void ret()
    {
        cout << out.str() << "\n";
        out.str(std::string());
        currentLength = 0;
    }
    
    void push(stringstream& s)
    {
        string cur;
        while (getline(s, cur, ' '))
        {
            cur += " ";
            if (currentLength + cur.length() > termWidth - 1) // Leaving room for the newline char
            {
                ret();
            }
            out << cur;
            currentLength += cur.length();
        }
        ret();
    }
    
    
};

int main() 
{
    stringstream out;
    int numBottles = 99;
    for (int i = numBottles; i > 0; --i)
    {
        if (i - 1 == 0)
        {
            out << i << " bottle of beer on the wall, " << i << " bottle of beer. ";
            out << "Take one down, pass it around, no more bottles of beer on the wall... ";
        }
        else
        {
            out << i << " bottles of beer on the wall, "  << i << " bottles of beer. ";
            out << "Take one down, pass it around, " <<  i - 1 << " bottles of beer on the wall... ";
        }
    }
    out << "No more bottles of beer on the wall, no more bottles of beer. ";
    out << "Go to the store and buy some more, 99 bottles of beer on the wall...";
    Output o;
    o.push(out);
    return 0;
}

// Notes:
// This was pretty straightforward. Writing the 99 bottles application was extremely easy
// but the hard part was writing something to manage how long the lines to output are.
// 
// Things that could be improved:
// There's probably a better way to handle outputting the text in the 99 bottles application.
// The Output class takes in a stringstream instead of a string or c-style string.
// There's probably a better way to do what I did to get the output formatted correctly.
