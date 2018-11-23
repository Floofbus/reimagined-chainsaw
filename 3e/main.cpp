// https://www.reddit.com/r/dailyprogrammer/comments/pkw2m/2112012_challenge_3_easy/
// /r/dailyprogrammer challenge #3, easy.
#include <iostream>
#include <string>
#include <algorithm>

std::string encrypt(std::string str, int offset)
{
    str.erase(std::remove_if(str.begin(), str.end(), isspace), str.end());
    for (int i = 0; i < str.length(); i++)
    {
        // For every character in the string, add the offset, looping
        // around the alphabet if need be.
        
        if (str[i] != ' ')
            str[i] = str[i] + 1;
    }
    return str;
}

std::string decrypt(std::string str, int offset)
{
    
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
}