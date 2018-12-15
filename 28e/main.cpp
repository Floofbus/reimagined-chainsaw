// https://www.reddit.com/r/dailyprogrammer/comments/r59kk/3202012_challenge_28_easy/
// /r/dailyprogrammer challenge #28, easy.
#include <vector>
#include <iostream>

using namespace std;


void printDuplicates(vector<int> &nums)
{
    int numChecks = 0;
    cout << "Duplicates: ";
    for (int i = 0; i < nums.size(); ++i)
    {
        for (int j = i + 1; j < nums.size(); ++j)
        {
            if (nums[i] == nums[j])
                cout << nums[j] << " ";
            
            numChecks++;
        }
    }
    cout << "\nChecked: " << numChecks << " times." << endl;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 6, 7, 8, 9, 10};
    vector<int> nums2 = {1, 2, 3, 3, 4, 5, 6, 6, 7, 8, 9, 10, 11, 11};
    
    cout << "Vector: ";
    for (int i = 0; i < nums.size(); ++i)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    printDuplicates(nums);
    printDuplicates(nums2);
    
    return 0;
}

// Notes:
// This one was easy because I did it the easy way. There are harder to implement ways to do this
// that are more performant, but I decided I would give it a try with what I knew before I read
// other solutions.
// A better approach would have been to use hash tables, which I know next to nothing about.
// There's not any user input here since we're just giving a demonstration of it working.
// 
// Things that could be improved:
// Implement a version of printDuplicates that uses a hash table instead.
//