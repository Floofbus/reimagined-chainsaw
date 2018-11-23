// https://www.reddit.com/r/dailyprogrammer/comments/pjbj8/easy_challenge_2/
// /r/dailyprogrammer challenge #2, easy.
#include <iostream>

int main()
{
    double total(0);
    do
    {
        std::cout << "The current total is: " << total << "\n";
        std::cout << "Enter an amount to add or enter a letter to quit: ";
        double input;
        std::cin >> input;
        total += input;
    } while (!std::cin.fail());
    std::cout << "The final total was: " << total << "\n";
    return 0;
}

// Notes:
// My first approach was to reimplement the dollar using a long and an integer to store
// the whole and decimal parts separately, but I forgot how to override the << operator
// and decided to make it much, much simpler using the much less accurate double.
// In the end, it accomplished the same thing with less accuracy, and the implementation
// time was much lower.
// Maybe next time i'll actually implement a Dollar class.

// Things I need to work on:
// Overloading operators, typecasting, modulo with floats.