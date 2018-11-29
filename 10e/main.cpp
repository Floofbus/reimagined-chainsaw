// https://www.reddit.com/r/dailyprogrammer/comments/pv98f/2182012_challenge_10_easy/
// /r/dailyprogrammer challenge #10, easy.
#include <iostream>
#include <string>
#include <regex>

using namespace std;

bool validateNumber(const string &s)
{
    regex tenDigit("[(]{0,1}\\d{3}[)-\\.]{0,1}[\\s]{0,1}\\d{3}[-\\s\\.]{0,1}\\d{4}");
    regex sevenDigit("\\d{3}[-\\s\\.]{0,1}\\d{4}");
    if (regex_match(s, tenDigit) || regex_match(s, sevenDigit))
        return true;
    
    return false;
}

int main()
{
    cout << "Enter a phone number: ";
    string number;
    getline(cin, number);
    
    if (validateNumber(number))
        cout << "It was a valid number.";
    else
        cout << "It was not a valid number.";
        
    return 0;
}

// Notes:
// Pretty simple one today. I had to brush up on my regex (but then again, who doesn't?)
// My approach was to define two different regex strings to check against, one for 10 digit
// numbers, and one for 7 digit numbers.
// 
// Things that could be improved:
// The matching is very loose. I could make validateNumber construct a single regex string
// to match. Right now you could input stuff like (123.456 789 and it would match just fine.
