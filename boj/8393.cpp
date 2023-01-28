#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a,b=0;
    cin >> a;
    while(a>0)
    {
        b+=a;
        a--;
    }

    cout << b;

    return 0;
}
