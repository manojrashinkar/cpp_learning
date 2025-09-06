//prog4strmap.cpp
#include <iostream>
#include<map>
#include<string>
using namespace std;


int main()
{

    string s;
    cout << "Enter a string: ";
    cin >> s;
    map<char, int> mapp;
    for (int i = 0; i < s.length(); i++)
    {
        mapp[s[i]]++;
    }

    int q;
    cout << "Enter q: ";
    cin >> q;
    while (q--)
    {
        char x;
        cout << "Enter x: ";
        cin >> x;
        cout << mapp[x] << endl;
        
    }

}