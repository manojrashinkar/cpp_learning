#include <iostream>
#include <string>
using namespace std;


int main()
{
    int n;

    cout << "Enter a n: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        cin>>arr[i];
    }

  // precompute5
  int hash[13]={0};
  for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }

    
int q;
cout<<"Enter q: ";  
cin>>q;
while(q--)
{
    int x;
    cout<<"Enter x: ";
    cin>>x;
    cout<<hash[x]<<endl;
}
    
}