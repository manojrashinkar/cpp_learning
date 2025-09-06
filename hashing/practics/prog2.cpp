// Given an array of integers, check whether it contains any duplicates.

// **Example:**
// ```cpp
// Input:  [1, 2, 3, 4]
// Output: false

// Input:  [1, 2, 3, 1]
// Output: true

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n = 5;
int arr[n] = {1, 2, 3, 1};
unordered_map<int , int > mapp ;
for(int i=0 ; i < n ; i++)
{
    mapp[arr[i]]++;
    if (mapp[arr[i]] > 1)
    {
        cout << "true" << endl;
        return 0;
    }
  

    
  
}
cout << "false" << endl;
return 0;


}