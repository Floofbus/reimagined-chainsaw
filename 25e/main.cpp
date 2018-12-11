// https://www.reddit.com/r/dailyprogrammer/comments/qxuug/3152012_challenge_25_easy/
// /r/dailyprogrammer challenge #25, easy.
#include <iostream>
#include <vector>

using namespace std;


int winner(vector<int> &candidates)
{
    // Returns the vector index that was the winner
    int highScore(0);
    int highIndex(0);
    int secondScore(0);
    for (unsigned int i = 0; i < candidates.size(); ++i)
    {
        if (candidates[i] > highScore)
        {
            highScore = candidates[i];
            highIndex = i;
        }
        else if (candidates[i] > secondScore)
            secondScore = candidates[i];
    }
    
    // Tie
    if (highScore == secondScore)
        return -1;
    
    return highIndex;
}

int main()
{
    cout << "Enter the number of candidates you can vote for (9 max): ";
    int numCandidates;
    cin >> numCandidates;
    
    vector<int> candidates;
    
    for (int i = 0; i < numCandidates; ++i)
    {
        candidates.push_back(0);
    }
    
    int temp;
    while (true)
    {
        // Keep voting until they're done voting
        cout << "Enter the number of the candidate you wish to vote for or -1 to quit: ";
        cin >> temp;
        
        if (temp == -1)
            break;
        
        temp--; // To get it zero indexed again
        
        candidates[temp] += 1;
    }
    
    temp = winner(candidates);
    if (temp == -1)
    {
        cout << "It was a tie!";
    }
    else
    {
        cout << "The winner was: " << temp + 1; // +1 for 1-indexed
    }
    
    return 0;
}

// Notes:
// Pretty easy one today. This particular solution is pretty bug-infested, but the idea is there.
// vector didn't work as I thought it would, just adding values as needed. You have to populate it
// before you can write to any of the values.
// 
// Things that could be improved:
// Could check to see if we're voting for someone who exists
// Named voting would be cool
// Voting for someone who doesn't exist crashes the application
// Type checking on input
//