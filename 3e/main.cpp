// https://www.reddit.com/r/dailyprogrammer/comments/pkw2m/2112012_challenge_3_easy/
// /r/dailyprogrammer challenge #3, easy.
#include <iostream>
#include <string>
#include <algorithm>

std::string encrypt(std::string str, int offset)
{
    str.erase(std::remove_if(str.begin(), str.end(), isspace), str.end());
    for (unsigned int i = 0; i < str.length(); i++)
    {
        // For every character in the string, add the offset, looping
        // around the alphabet if need be.
        // 97 = a, 122 = z
        if (str[i] + offset > 122)
            str[i] += offset - 26;
        else
            str[i] += offset;
    }
    return str;
}

std::string decrypt(std::string str, int offset)
{
    for (unsigned int i = 0; i < str.length(); i++)
    {
        // For every character in the string, add the offset, looping
        // around the alphabet if need be.
        // 97 = a, 122 = z
        if (str[i] - offset < 97)
            str[i] = str[i] - offset + 26;
        else
            str[i] -= offset;
    }
    return str;
}

int main()
{
    std::cout << "Would you like to (e)ncrypt, or (d)ecrypt?: ";
    char action;
    std::cin >> action;
    std::cin.ignore();
    
    switch (action)
    {
        case 'e':
        case 'E':
            {
                std::cout << "Enter a string to encrypt: ";
                std::string str;
                std::getline(std::cin, str);
                
                std::cout << "Enter the offset: ";
                int ofs;
                std::cin >> ofs;
                
                std::cout << encrypt(str, ofs);
                break;
            }
        case 'd':
        case 'D':
            {
                std::cout << "Enter a string to decrypt: ";
                std::string str;
                std::getline(std::cin, str);
                
                std::cout << "Enter the offset: ";
                int ofs;
                std::cin >> ofs;
                
                std::cout << decrypt(str, ofs);
                break;
            }
        default:
            std::cout << "Invalid action\n";
            break;
    }
    return 0;
}

// Notes:
// There is a problem with this, in that it can't handle uppercase characters.
// I would need to figure out a way to normalize the case of the characters.