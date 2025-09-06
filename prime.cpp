#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int count = 0;
    int num = 29;
    for (int i = 1 ; i*i <= num ; i++)
    {
        if (num % i ==0)
        {
            count++;
            if (num/i != i)
            {count++;
                
            }
            
        }
    }   

    if (count == 2)
    {
        cout << num << " is a prime number" << endl;
    }
    else
    {
        cout << num << " is not a prime number" << endl;
    }


}