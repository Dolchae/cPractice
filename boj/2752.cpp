#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,c=0,d=0;
    cin >> a >> b >> c;
    if(a>b)
    {
        if(b>c)
        {
            cout << c << " " << b << " " << a;
        }
        else if(c>a)
        {
           cout << b << " " << a << " " << c;
        }
        else
        {
           cout << b << " " << c << " " << a;

        }
    }
    else  // a<b
    {
        if(c<a)
        {
            cout << c << " " << a << " " << b;

        }
        else if(b<c)
        {
            cout << a << " " << b << " " << c;

        }
        else
        {
            cout << a << " " << c << " " << b;

        }
    }



    return 0;
}
