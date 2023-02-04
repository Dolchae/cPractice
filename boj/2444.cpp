#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,i,j;
    cin >> n;

    for(i=n;i>1;i--)
    {
        for(j=i-1;j>0;j--)
            cout << " ";
        for(j=0;j<2*(n-i)+1;j++)
            cout << "*";
        cout << "\n";

    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
            cout << " ";
        for(j=2*(n-i)-1;j>0;j--)
            cout << "*";

        if(i==n-1)
            break;
        cout << "\n";
    }


    return 0;
}
