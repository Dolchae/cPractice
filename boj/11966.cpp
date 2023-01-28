#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n==1)
    {
        cout << 1;
        return 0;
    }

    while(n!=1)
    {
        if(n%2!=0)
        {
            cout << 0;
            return 0;
        }
        n/=2;
    }
    cout << 1;




    return 0;
}
