// https://www.reddit.com/r/dailyprogrammer/comments/pm6oj/2122012_challenge_4_easy/
// /r/dailyprogrammer challenge #4, easy.
#include <iostream>
#include <fstream>
#include <random> // for rng
#include <string>

std::random_device rd;
std::mt19937 eng(rd());
std::uniform_int_distribution<> distr(33, 126);
// The ascii range we want is 33 - 126

char getRandomChar()
{
    return static_cast<char>(distr(eng));
}

int main()
{
    std::cout << "How many passwords would you like to generate?: ";
    int pwnum;
    std::cin >> pwnum;
    
    std::cout << "How long should each password be?: ";
    int pwlen;
    std::cin >> pwlen;
    
    std::cout << "Enter the file name to output passwords to: ";
    std::string of;
    std::cin >> of;
    
    std::fstream outfile;
    outfile.open(of.c_str(), std::fstream::out);
    
    std::cout << "Beginning password generation...\n";
    
    for (int i = 0; i < pwnum; ++i)
    {
        std::string pw = "";
        
        for (int j = 0; j < pwlen; ++j)
        {
            pw += getRandomChar();
        }
        
        std::cout << "Password " << i + 1 << ":\t" << pw << "\n";
        outfile << pw << "\n";
    }
    
    std::cout << "Done generating passwords.";
    outfile.close();
    return 0;
}

// Notes:
// My first attempt at generating numbers inside of a range was to use rand()
// and modulo that by the sum of the lower and upper bounds. This did not work
// as I intended it to, and stackoverflow recommended against using that entirely.
// so I implemented a mersenne twister instead. Still not secure, but better.
// That fixed my problems.
//
// I thought that I would run into problems with writing multiple lines to a file,
// but as long as you don't close the file between writes, it appends any new 
// output.
//
// I had to change the compile options of this program to use the C++11 standard
// to use the mersenne twister.
//
// Things I noticed that I could improve on:
// I wasn't sure how to go about rng this time around. It wouldn't be a bad idea
// to memorize how to implement a mersenne twister for future reference.
// I didn't really know why I had to pass the filename as a C-style string to 
// fstream::open()
//
// Things that could be better about this implementation:
// Type and value checking on input.
// A timer to see how long it took to generate said passwords.