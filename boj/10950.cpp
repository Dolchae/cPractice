#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a,b,t;
    cin >> t;

    for(int i=t;i>0;i--)
    {
        cin >> a >> b;
        cout << a+b << "\n";
    }

    return 0;
}
