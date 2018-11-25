// https://www.reddit.com/r/dailyprogrammer/comments/pnhyn/2122012_challenge_5_easy/
// /r/dailyprogrammer challenge #5, easy.
#include <iostream>
#include <fstream>
#include <string>

void program()
{
    std::cout << "Authenticated successfully.\n";
}

int main()
{
    std::cout << "Enter your username: ";
    std::string user;
    std::getline(std::cin, user);
    
    std::cout << "Enter your password: ";
    std::string pass;
    std::getline(std::cin, pass);
    
    std::string userPass = user + "\\" + pass;
    
    std::fstream userdb("users.db");
    if (!userdb.is_open())
    {
        std::cout << "Error opening user database.\n";
        return 0;
    }
    
    std::string line;
    while (std::getline(userdb, line));
    {
        // For some reason, it only executes the while loop for the last line of the file.
        std::cout << "a\n";
        if (line == userPass)
        {
            program();
            return 0;
        }
    }
    std::cout << "Incorrect username or password.\n";
    userdb.close();
    return 0;
    // for each line in the file, check if the username matches the entered one
    // and if there is a match, check that the password matches the username.
    
}