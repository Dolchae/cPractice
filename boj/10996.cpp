#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,i; float j;
    cin >> n;


    for(i=1;i<=n;i++)
    {
        if(n%2==0)
        {
            for(j=1;j<=n/2;j++)
                cout << "* ";
            cout << "\n";
            for(j=1;j<=n/2;j++)
                cout << " *";
            if(i==n)
                break;
            cout << "\n";
        }
        else
        {
            for(j=0;j<=n/2+0.5;j++)
                cout << "* ";
            cout << "\n";
            for(j=0;j<=n/2-0.5;j++)
                cout << " *";
            if(i==n)
                break;
            cout << "\n";
        }
    }

    return 0;
}
