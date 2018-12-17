// https://www.reddit.com/r/dailyprogrammer/comments/r8a70/3222012_challenge_29_easy/
// /r/dailyprogrammer challenge #29, easy.
#include <iostream>
#include <string>
#include <locale>

using namespace std;


bool checkForPalindrome(string s)
{
    // Pass by value here because we were making a copy anyway.
    
    // Remove all non-alphanumeric characters
    string characters("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890");
    for (int i = 0; i < s.length(); ++i)
    {
        if (characters.find(s[i]) == string::npos)
            {
                s.replace(i, 1, "");
                i--; // We shrank the string, recheck the index.
            }
    }
    
    // Make the string lowercase
    locale loc;
    for (unsigned int i = 0; i < s.length(); ++i)
    {
        s[i] = std::tolower(s[i]);
    }
    
    // Check if the resulting string is a palindrome
    bool isPalindrome = true;
    for (unsigned int i = 0; i < s.length() / 2; ++i)
    {
        if (s[i] != s[(s.length()-1) - i])
            isPalindrome = false;
    }
    
    return isPalindrome;
}

int main()
{
    cout << "Enter a string: ";
    string input;
    getline(cin, input);
    
    bool isPalindrome = false;
    // Check if it is a palindrome
    isPalindrome = checkForPalindrome(input);
    
    cout << "Input string: " << input << "\n";
    cout << "Is palindrome: ";
    if (isPalindrome)
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
    
    return 0;
}

// Notes:
// Another easy one today. I should move on to more complicated ones.
// With my palindrome checker function, I passed by value so I could modify the string safely,
// after that I remove all non-alphanumeric characters, then make the whole string lowercase.
// After that, I check index i against the index max minus i. With this approach we only need
// to check 1/2 of the values on even, and 1/2 - 1 values on odd, since the center value alone
// would always be symmetrical.
//
// Things that could be improved:
// While I'm sure that there's better ways to do what I did, I am not sure how this could be improved.
//