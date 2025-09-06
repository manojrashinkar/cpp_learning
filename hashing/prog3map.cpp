#include <iostream>
#include <string>
#include <map>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //map<int,int> mapp;

    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    map<int,int> mapp;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mapp[arr[i]]++;

    }
    
    for (auto it : mapp)
    {
        cout << it.first << " ->" << it.second << endl;
    }

    int q;
    cout << "Enter q: ";
    cin >> q;
    while (q--)
    {
        int x;
        cout << "Enter x: ";
        cin >> x;
        cout << mapp[x] << endl;
    }


}

