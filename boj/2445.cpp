#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,i,j;
    cin >> n;

    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
            cout << "*";
        for(j=0;j<(n-i)*2;j++)
            cout << " ";
        for(j=0;j<i;j++)
            cout << "*";
        cout << "\n";
    }
    for(i=n-1;i>0;i--)
    {
       for(j=0;j<i;j++)
            cout << "*";
        for(j=0;j<(n-i)*2;j++)
            cout << " ";
        for(j=0;j<i;j++)
            cout << "*";
        if(i==1)
            break;
        cout << "\n";
    }



    return 0;
}
