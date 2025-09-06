#include <iostream>
using namespace std;

int main()
{
    //string
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int hash[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        hash[s[i] - 'a']++;
    }

    int q;
    cout << "Enter q: ";
    cin >> q;
    while (q--)
    {
        char x;
        cout << "Enter x: ";
        cin >> x;
        cout << hash[x - 'a'] << endl;
    }
}