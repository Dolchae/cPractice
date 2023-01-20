#include <iostream>

using namespace std;

int main()
{
    int x,y,w,h,m,n;
    cin >> x >> y >> w >> h;

    if(h-y < w-x)
    {
        m=h-y;
    }
    else
    {
        m=w-x;
    }

    if(y<x)
    {
        n=y;
    }
    else
    {
        n=x;
    }
    if(m<n)
    {
        cout << m;
    }
    else
    {
        cout << n;
    }


    return 0;
}
