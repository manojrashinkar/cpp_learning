// <!-- 
// ### 🚩 3. **Find First Repeating Element**

// **Problem:**
// Given an array of integers, find the all element that repeats.

// **Example:**
// ```cpp
// Input:  [10, 5, 3, 4, 3, 5, 6]
// Output: 5
// ``` -->

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {10, 5, 3, 4, 3, 5, 6 , 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freqMap;
    for (int num : arr)
    {
        freqMap[num]++;
    

    }
   

    for(auto it : freqMap) 
    {
        if(it.second > 1) 
        {
            cout << it.first << " ";
        }

    
}
}
