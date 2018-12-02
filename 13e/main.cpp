// https://www.reddit.com/r/dailyprogrammer/comments/pzo4w/2212012_challenge_13_easy/
// /r/dailyprogrammer challenge #13, easy.
#include <iostream>
#include <sstream>

using namespace std;

// Let's start with the info I would need.
// Jan1, Mar3, May5, Jul7, Aug8, Oct10, Dec12 = 31d
// Apr4, Jun6, Sep9, Nov11 = 30d
// Feb2 = 28 days, 29 on leap years.
int monToNumDays (int m, bool isLeapYear = false)
{
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        return 31;
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        return 30;
    else if (m == 2)
    {
        if (isLeapYear)
            return 29;
        else
            return 28;
    }
    return -1;
}

int strMonToInt (string &s)
{
    if (s == "january" || s == "January" || s == "jan" || s == "Jan")
        return 1;
    else if (s == "february" || s == "February" || s == "feb" || s == "Feb")
        return 2;
    else if (s == "march" || s == "March" || s == "mar" || s == "Mar")
        return 3;
    else if (s == "april" || s == "April" || s == "apr" || s == "Apr")
        return 4;
    else if (s == "may" || s == "May")
        return 5;
    else if (s == "june" || s == "June" || s == "jun" || s == "Jun")
        return 6;
    else if (s == "july" || s == "July" || s == "jul" || s == "Jul")
        return 7;
    else if (s == "august" || s == "august" || s == "aug" || s == "Aug")
        return 8;
    else if (s == "september" || s == "September" || s == "sep" || s == "Sep")
        return 9;
    else if (s == "october" || s == "October" || s == "oct" || s == "Oct")
        return 10;
    else if (s == "november" || s == "November" || s == "nov" || s == "Nov")
        return 11;
    else if (s == "december" || s == "December" || s == "dec" || s == "Dec")
        return 12;
    else
        return -1;
}

int sumDaysToMon (int m, bool isLeapYear = false)
{
    int sum = 0;
    for (int i = 1; i < m; ++i)
    {
        sum += monToNumDays(i);
    }
    return sum;
}

int main()
{
    cout << "Enter the name of the month: ";
    string m;
    cin >> m;
    
    cout << "Enter calendar day of the month: ";
    int d;
    cin >> d;
    
    cout << "Is it a leap year? (y/n): ";
    char leapYear;
    cin >> leapYear;
    //
    //
    cout << m << " " << d << " is day " << sumDaysToMon(strMonToInt(m), (leapYear == 'y') ? true : false) + d << " of the year.\n";
    return 0;
}

// Notes:
// This was a pretty easy one. Just kinda checking against input and seeing what month it is and stuff.
// Technically this challenge was supposed to be done with dates like January 1st, but I simplified it to
// january 1. Not technically correct, but I didn't feel like writing a function just to read those.
// 
// Things that could be improved:
// Input definitely. I was having trouble getting streams and getline to work properly, so I just decided
// to use cin directly to the variables with no type or range checking, which leads me on to the last thing.
// This does not check to see if a user entered an invalid date. It's entirely possible for them to enter a
// nonsense month, and a nonsense date, like Quabber -13 and end up with it being the -14th day of the year.
