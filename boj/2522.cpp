#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,i,j;
    cin >> n;

    for(i=0;i<n;i++)
    {
        for(j=n-i-1;j>0;j--)
            cout << " ";
        for(j=0;j<i+1;j++)
            cout << "*";
        cout << "\n";
    }
    for(int i=n-1;i>0;i--)
    {
        for(j=0;j<n-i;j++)
            cout << " ";
        for(j=i;j>0;j--)
            cout << "*";
        cout << "\n";
    }

    return 0;
}
