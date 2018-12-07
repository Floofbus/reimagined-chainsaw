// https://www.reddit.com/r/dailyprogrammer/comments/qnkro/382012_challenge_20_easy/
// /r/dailyprogrammer challenge #20, easy.
#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector<int> primes = {2};
    
    cout << "Enter a number: ";
    int n;
    cin >> n;
    
    cout << "Finding all primes below " << n << endl;
    
    for (int i = 2; i <= n; ++i)
    {
        bool isPrime = true;
        for (unsigned int j = 0; j < primes.size(); ++j)
        {
            if (i % primes[j] == 0)
                isPrime = false;
        }
        if (isPrime)
            primes.push_back(i);
        
    }
    
    //output primes, separated by \t
    for (unsigned int i = 0; i < primes.size(); ++i)
    {
        cout << primes[i] << "\t";
    }
    cout << endl;
    
    cout << "Done printing primes." << endl;
    return 0;
}

// Notes:
// Cool beans, my proposed solution worked just as intended.
// What I did was create a vector of ingegers that are prime, and started it off with just 2 in the vector
// After that I checked every number up to our maximum to see if it was divisible by any number inside of
// our primes vector. If it wasn't evenly divisible by anything in the primes vector, it would  be pushed
// onto the vector.
// 
// Things that could be improved:
// Type checking on input?
// We could do the prime checking in a function, so that it can terminate early if it has found that a
// number is not prime. Currently it continues to check every member of the primes vector even if it knows
// it isn't a prime.
//