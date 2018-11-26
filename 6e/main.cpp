// https://www.reddit.com/r/dailyprogrammer/comments/pp53w/2142012_challenge_6_easy/
// /r/dailyprogrammer challenge #6, easy.
#include <iostream>
#include <iomanip>

int main()
{
    long double pi = 4;
    int d = 3;
    for (int i = 0; i < 30; ++i)
    {
        pi -= 4.0l / d;
        d += 2;
        pi += 4.0l / d;
        d += 2;
        
    }
    
    std::cout << std::setprecision(32);
    std::cout << pi;
    return 0;
}

// Notes:
// I have no idea how to calculate pi, all attempts to understand it have failed.
// Welp.