#include <iostream>
#include <algorithm>    
#include <cmath>
using namespace std;

void fn(int arr[], int n , int i )
{
    if(i>=n/2)
    {
        return;
    }
    swap(arr[i],arr[n-i-1]);
    fn(arr,n,i+1);
   
}


int main()
{
    int n ;
    cin>>n ;
    int* arr = new int[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    fn(arr,n,0);
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;

}