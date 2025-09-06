#include<iostream>
#include<unordered_map> 
#include<vector>

using namespace std;

//Richest Customer Wealth
int maximumWealth(vector<vector<int>>& accounts) {
    int maxWealth = 0;
    for (const auto& customer : accounts) {
        int currentWealth = 0;
        for (int bankBalance : customer) {
            currentWealth += bankBalance;
        }
        maxWealth = max(maxWealth, currentWealth);
    }
    return maxWealth;
}

int main()
{
    int n, m;
    cout << "Enter number of customers (n) and banks (m): ";
    cin >> n >> m;

    vector<vector<int>> accounts(n, vector<int>(m));
    cout << "Enter the account balances:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> accounts[i][j];
        }
    }

    int richestWealth = maximumWealth(accounts);
    cout << "The richest customer's wealth is: " << richestWealth << endl;

    return 0;
}