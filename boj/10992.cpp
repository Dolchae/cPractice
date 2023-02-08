#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,i,j;
    cin >> n;

    for(i=n;i>0;i--)
    {
        if(i==1)
        {
            for(j=0;j<n*2-1;j++)
                cout << "*";
            break;
        }
        for(j=i-1;j>0;j--)
            cout << " ";
        cout << "*";
        for(j=1;j<(n-i)*2;j++)
            cout << " ";
        if(i==n)
        {
            cout << "\n";
            continue;
        }
        cout << "*";


        cout << "\n";

    }

    return 0;
}
