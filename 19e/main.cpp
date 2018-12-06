// https://www.reddit.com/r/dailyprogrammer/comments/qlwrc/372012_challenge_19_easy/
// /r/dailyprogrammer challenge #19, easy.
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;


long numCharsToAdd(const string &s, const string &characters, const vector<string> &ignoredLines)
{
    
    for (int i = 0; i < ignoredLines.size(); ++i)
    {
        if (s == ignoredLines[i])
        {
            return 0;
        }
    }
    
    long total(0);
    for (int i = 0; i < s.length(); ++i)
    {
        if (characters.find(s[i]) != std::string::npos)
        {
            total++;
        }
    }
    return total;
}

int main()
{
    string characters("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890");
    vector<string> ignoredLines {
        "ADVENTURE I. A SCANDAL IN BOHEMIA",
        "ADVENTURE II. THE RED-HEADED LEAGUE",
        "ADVENTURE III. A CASE OF IDENTITY",
        "ADVENTURE IV. THE BOSCOMBE VALLEY MYSTERY",
        "ADVENTURE V. THE FIVE ORANGE PIPS",
        "ADVENTURE VI. THE MAN WITH THE TWISTED LIP",
        "VII. THE ADVENTURE OF THE BLUE CARBUNCLE",
        "VIII. THE ADVENTURE OF THE SPECKLED BAND",
        "IX. THE ADVENTURE OF THE ENGINEER'S THUMB",
        "X. THE ADVENTURE OF THE NOBLE BACHELOR",
        "XI. THE ADVENTURE OF THE BERYL CORONET",
        "XII. THE ADVENTURE OF THE COPPER BEECHES",
        "I.", "II.", "III.", "IV.", "V.", "VI.", "VII.", 
        "VIII.", "IX.", "X.", "XI.", "XII."
    };
    
    string startLine("ADVENTURE I. A SCANDAL IN BOHEMIA");
    string endLine("End of the Project Gutenberg EBook of The Adventures of Sherlock Holmes, by ");
    
    fstream f;
    f.open("Sherlock_Holmes.txt", fstream::in);
    if (!f.is_open())
    {
        cout << "Couldn't open Sherlock_Holmes.txt, exiting." << endl;
        return 1;
    }
    // First we would need to ignore the header
    string temp;
    while (temp != startLine)
        getline(f, temp);
    
    // once we reach the actual book, read in line by line
    long total(0);
    while (getline(f, temp))
    {
        if (temp == endLine)
            break;
        
        total += numCharsToAdd(temp, characters, ignoredLines);
    }
    
    cout << total;
    // make sure it doesn't match one of our ignored lines,
    // and if it isn't one of those, check the line character by character
    // for anything that is alphanumeric.
    f.close();
    return 0;
}

// Notes:
// Alright, so this one was kinda tricky, but I think I had an okay solution in the end.
// Although, this program is very specific to this particular book, it accomplishes its goal.
// I had a lot of struggle today getting started, as well as focusing on the task at hand.
// 
// Things that could be improved:
// The character string and vector of ignored lines should probably stay in the main loop
// and just be passed in by reference. Done.
// We could probably make this more general by specifing begin lines and end lines to start and end counting on. Done.