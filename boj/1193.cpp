#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,a=0,b;
    cin >> n;

    int i=1;
    while(i>0)
    {
        a += i;
        if(a>=n)
            break;
        i++;
    }

    n -= ((i-1)*i)/2;

    if(i%2==0)
    {
        a = n; b = (i+1)-a;
        cout << a << "/" << b;

    }

    else
    {
        a = (i+1)-n; b = (i+1)-a;
        cout << a << "/" << b;
    }

    return 0;
}
