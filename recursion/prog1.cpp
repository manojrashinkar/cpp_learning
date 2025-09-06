#include <iostream>
#include <algorithm>    
#include <cmath>
using namespace std;
int cnt=0;
void fn()
{
    if(cnt==3)
    {
        return;
    }
    cout<<"Hello World"<<cnt<<endl;
    cnt++;
    fn();
}

int main() {
    fn();
    return 0;
}