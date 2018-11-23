// https://www.reddit.com/r/dailyprogrammer/comments/pih8x/easy_challenge_1/
// /r/dailyprogrammer challenge #1, easy.
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

struct User
{
    std::string name;
    int age;
    std::string username;
};

int main()
{
    User p;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, p.name);
    
    std::cout << "Enter your age: ";
    std::cin >> p.age;
    
    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Enter your age: ";
        std::cin >> p.age;
    }
    
    std::cout << "Enter your username: ";
    std::cin.ignore();
    std::getline(std::cin, p.username);
    
    std::ostringstream out;
    out << "Your name is " << p.name << ", you are " << p.age << " years old, and your username is " << p.username << "\n";
    std::cout << out.str();
    
    std::fstream ofile;
    ofile.open("log.txt", std::fstream::out);
    ofile << out.str();
    ofile.close();
    
    return 0;
}

// Things I learned or re-learned doing this challenge:
// getline takes cin first, and the destination second
// getline is more appropriate for getting things that may have spaces in them
// cin.ignore() when called with no arguments discards the rest of the stream
// basic usage of the fstream class.

// Things I know I need to improve on from my experience:
// iostreams, file streams, type checking, making template functions.

// Notes:
// I really wanted to use typechecking for every input, but it turned out that all I
// needed to do was check for errors for the age.
// The real challenge of this was sticking to it. I've got a long way to go if I'm
// going to break myself of quitting at the first sign of resistance.