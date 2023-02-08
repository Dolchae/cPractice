#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,i,j;
    cin >> n;

    for(i=1;i<=n;i++)
    {

        if(i%2!=0)
        {

            for(j=0;j<n;j++)
            {
                cout << "*";
                if(i==n && j==n-1)
                    break;
                cout << " ";
            }
        }
        else
            for(j=0;j<n;j++)
        {
            cout << " *";
        }
        if(i==n)
            break;
        cout << "\n";


    }

    return 0;
}
