// Input: nums = [1, 2, 2, 3, 3, 3]

// Output: 3

// Explanation: The number 3 appears the most (3 times). It is the most frequent element.
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
int n;
cin>> n ;
vector <int> vc(n);
for( int i= 0 ; i < n ; i++)
{
   cin>>vc[i];

}
unordered_map<int , int > mapp;
for( int  num : vc)
{
mapp[num]++;

}
int repeat = 0 ;
int repeatednum = vc[0];
for(auto it : mapp)
{
    if(it.second > repeat)
    {
        repeat = it.second;
        repeatednum = it.first;
    }
 


}

   cout<<"repeated num is ";
    cout<<repeatednum<<endl;
    cout<<"repeat count is ";
    cout<<repeat<<endl;



}