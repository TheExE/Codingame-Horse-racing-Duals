#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int N;
    cin >> N; cin.ignore();
    int highestStrenght = 0;
    int secondHighestStrenght = 0;   
    vector<int> allHorsesStrenghts;
    
    for (int i = 0; i < N; i++) 
    {
        int Pi;
        cin >> Pi; cin.ignore();
        
        // Record all horses strenghts
        allHorsesStrenghts.push_back(Pi);    
    }
    
    // Sort the array
    sort(allHorsesStrenghts.begin(), allHorsesStrenghts.end());
    
    int smallestDifference = INT_MAX;    
    for(int i = 0; i < allHorsesStrenghts.size()-1; i++)
    {                     
        // Compare strenght pairs in sorted array
        int curDifference = abs(allHorsesStrenghts[i]-allHorsesStrenghts[i+1]);        
        if(curDifference < smallestDifference)
        {
            // Set the new smalles strenght differene
            smallestDifference = curDifference;
        }            
    }
    
    // Output the smalles difference
    cout << smallestDifference << endl;
}