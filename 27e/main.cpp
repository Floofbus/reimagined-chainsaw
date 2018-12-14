// https://www.reddit.com/r/dailyprogrammer/comments/r0r3h/3172012_challenge_27_easy/
// /r/dailyprogrammer challenge #27, easy.
#include <iostream>

using namespace std;


int main()
{
    cout << "Enter year: ";
    int year;
    cin >> year;
    
    // Output century based on year
    int century(0);
    if (year % 100 == 0)
        century = year / 100;
    else
        century = year / 100 + 1;
    
    cout << "Century: " << century << "\n";
    
    //Output if it's a leap year:
    cout << "Leap year: ";
    if (year % 4 != 0)
        cout << "No";
    else if (year % 100 != 0)
        cout << "Yes";
    else if (year % 400 != 0)
        cout << "No";
    else
        cout << "Yes";
    cout << endl;
    
    return 0;
}
// Notes:
// Another easy one today. I didn't implemented it entirely the way I wanted to, but
// adding that at a later date wouldn't be too hard. I wanted to make it output something
// like "22nd" century, and not just Century: $n.
// 
// Things that could be improved:
// Implementing a way to append st/nd/rd to the end of centuries.
// Type checking on input.
// 
//