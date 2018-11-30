// https://www.reddit.com/r/dailyprogrammer/comments/pwons/2192012_challenge_11_easy/
// /r/dailyprogrammer challenge #11, easy.
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main(int argc, char* argv[])
{   
    int month = atoi(argv[1]);
    int day = atoi(argv[2]);
    int year = atoi(argv[3]);
   
    // My problem is that I don't currently know how to handle time and dates.
    // It seems like ctime has the functionality I need, but I do not understand
    // how that library works yet.
    
    cout << month << "/" << day << "/" << year << " was a " << "OUTPUT" << endl;
    return 0;
}