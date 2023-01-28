#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a,b,c;

    cin >> a >> b >> c;


    if(b==c)
    {
        cout << -1;
        return 0;
    }

    float x = -a/(b-c);

    if(x<=0)
    {
        cout << -1;
    }

    else if(a%(c-b)==0)
    {
        cout << x+1;
    }

    else
    {
        printf("%d", (int)(a/(c-b))+1);
    }
    return 0;
}
