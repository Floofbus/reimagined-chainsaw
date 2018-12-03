// https://www.reddit.com/r/dailyprogrammer/comments/q4c34/2242012_challenge_15_easy/
// /r/dailyprogrammer challenge #15, easy.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{    
    fstream f;
    f.open("infile.txt", fstream::in);
    if (!f.is_open())
    {
        cout << "Couldn't open infile.txt !" << endl;
        return 1;
    }
    
    fstream o;
    o.open("outfile.txt", fstream::out);
    if (!f.is_open())
    {
        cout << "Couldn't open outfile.txt !" << endl;
        return 2;
    }
    o << std::right;
    string l;
    while (getline(f, l))
    {
        o.width(100);
        o << l << "\n";
    }
    f.close();
    o.close();
    return 0;
    //
}

// Notes:
// Another pretty easy one today. If I hadn't done the challenges before this, 
// I would probably be scratching my head a whole lot trying to figure out how fstreams work.
// Something I'm not sure about is the need to set the output width for each line of the infile.
// It's still not what I expected, but you only have to set the justification once, but then the
// output length still needs to be re-set for each new line of the file.
// I didn't close the files before ending the program, which I will now go do. Done.
// 
// Things that could be improved:
// I'm not really sure. I would need someone else with more experience to take a look at it and
// give me feedback.
// I guess you could have variables for infile name, outfile name, and line width.
