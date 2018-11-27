// https://www.reddit.com/r/dailyprogrammer/comments/pr2xr/2152012_challenge_7_easy/
// /r/dailyprogrammer challenge #7, easy.
#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <map>

using namespace std;

// New version, using a map
string morseToStr(string s, map<char, string> &m)
{
    stringstream in(s);
    stringstream out;
    
    string morseLetter;
    while (getline(in, morseLetter, ' '))
    {
        map<char, string>::iterator itr;
        for (itr = m.begin(); itr != m.end(); ++itr)
        {
            if (morseLetter == itr->second)
            {
                out << itr->first;
                break;
            }
        }
    }
    return out.str();
}

string strToMorse(string s, map<char, string> &m)
{
    stringstream out;
    for (unsigned int i = 0; i < s.length(); ++i)
    {
        map<char, string>::iterator itr;
        for (itr = m.begin(); itr != m.end(); ++itr)
        {
            if (s[i] == itr->first)
            {
                out << itr->second;
                break;
            }
        }
        out << ' ';
    }
    return out.str();
}

int main()
{
    // Set up our map
    map<char, string> table;
    table.insert(pair<char, string>('A', ".-"));
    table.insert(pair<char, string>('B', "-..."));
    table.insert(pair<char, string>('C', "-.-."));
    table.insert(pair<char, string>('D', "-.."));
    table.insert(pair<char, string>('E', "."));
    table.insert(pair<char, string>('F', "..-."));
    table.insert(pair<char, string>('G', "--."));
    table.insert(pair<char, string>('H', "...."));
    table.insert(pair<char, string>('I', ".."));
    table.insert(pair<char, string>('J', ".---"));
    table.insert(pair<char, string>('K', "-.-"));
    table.insert(pair<char, string>('L', ".-.."));
    table.insert(pair<char, string>('M', "--"));
    table.insert(pair<char, string>('N', "-."));
    table.insert(pair<char, string>('O', "---"));
    table.insert(pair<char, string>('P', ".--."));
    table.insert(pair<char, string>('Q', "--.-"));
    table.insert(pair<char, string>('R', ".-."));
    table.insert(pair<char, string>('S', "..."));
    table.insert(pair<char, string>('T', "-"));
    table.insert(pair<char, string>('U', "..-"));
    table.insert(pair<char, string>('V', "...-"));
    table.insert(pair<char, string>('W', ".--"));
    table.insert(pair<char, string>('X', "-..-"));
    table.insert(pair<char, string>('Y', "-.--"));
    table.insert(pair<char, string>('Z', "--.."));
    table.insert(pair<char, string>('0', "-----"));
    table.insert(pair<char, string>('1', ".----"));
    table.insert(pair<char, string>('2', "..---"));
    table.insert(pair<char, string>('3', "...--"));
    table.insert(pair<char, string>('4', "....-"));
    table.insert(pair<char, string>('5', "....."));
    table.insert(pair<char, string>('6', "-...."));
    table.insert(pair<char, string>('7', "--..."));
    table.insert(pair<char, string>('8', "---.."));
    table.insert(pair<char, string>('9', "----."));
    table.insert(pair<char, string>(' ', "/"));
    
    
    string str = ".... . .-.. .-.. --- / -.. .- .. .-.. -.-- / .--. .-. --- --. .-. .- -- -- . .-. / --. --- --- -.. / .-.. ..- -.-. -.- / --- -. / - .... . / -.-. .... .- .-.. .-.. . -. --. . ... / - --- -.. .- -.--";
    str = morseToStr(str, table);
    cout << str << "\n";
    str = strToMorse(str, table);
    cout << str << "\n";
    return 0;
}

// Notes:
// Wow, uh, this required a lot of case statements. -- N/A now
// One of the translation images for morse was wrong, so I had to redo all of the codes.
// a map data type does not have the .begin() member function if it is const.
//
// Things that could be improved upon:
// Could've used a hashmap to make this whole thing easier. -- This has been implemented.