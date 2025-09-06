/*
Given an array of integers, count the frequency of each element and print the result.

**Example:**
```cpp
Input:  [1, 2, 2, 1, 3]
Output: 
1 -> 2
2 -> 2
3 -> 1
```
*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
int arr[] = {1, 2, 2, 1, 3};

unordered_map<int, int> freqMap;
for (int num : arr) {
    freqMap[num]++;
}
for(auto it : freqMap) {
    cout << it.first << " -> " << it.second << endl;    
}

}