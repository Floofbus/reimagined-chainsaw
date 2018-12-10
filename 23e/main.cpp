// https://www.reddit.com/r/dailyprogrammer/comments/quli5/3132012_challenge_23_easy/
// /r/dailyprogrammer challenge #23, easy.
#include <vector>
#include <iostream>

using namespace std;

template <typename T>
void splitVector(vector<T> &in, vector<T> &o1, vector<T> &o2)
{
    bool odd = false;
    if (in.size() % 2 != 0)
        odd = true;
    
    for (unsigned int i = 0; i < in.size() / 2; ++i)
    {
        o1.push_back(in[i]);
    }
    
    int startIndex;
    if (odd)
    {
        o1.push_back(in[(in.size() / 2)]);
        startIndex = (in.size() / 2) + 1;
    }
    else
        startIndex = (in.size() / 2);
        
    for (unsigned int i = startIndex; i < in.size(); ++i)
    {
        o2.push_back(in[i]);
    }
    
    return;
}

int main()
{
    vector<int> a {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> b;
    vector<int> c;
    
    splitVector(a, b, c);
    
    cout << "Vector A: "; 
    for (unsigned int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    
    cout << "Vector B: "; 
    for (unsigned int i = 0; i < b.size(); ++i)
    {
        cout << b[i] << " ";
    }
    cout << "\n";
    
    cout << "Vector C: "; 
    for (unsigned int i = 0; i < c.size(); ++i)
    {
        cout << c[i] << " ";
    }
    cout << "\n";
}

// Notes:
// Pretty easy one today. I decided to take the route of using vectors instead of arrays
// since that's what modern C++ is. I decided to use the approach of passing in two
// destination vectors in addition to the one that we're splitting.
// 
// Things that could be improved:
// I probably could have used an iterator to handle the assigning of values instead of
// multiple for loops.