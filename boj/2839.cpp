#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,a=0,i=1,b=0,s;
    cin >> s;

    n=s;

    while(n>0)
    {
        if(a*5+b*3>s)
            break;
        if(n%5==0||(n-5*i)%3==0)
            {a++; n -= 5;}
        else if(n%3==0||(n-3*i)%5==0)
            {b++; n -= 3;}
        else
            i++;
    }



    if(a==0&&b==0)
        cout << -1;
    if((n%3!=0||n%5!=0)&&n!=0)
        cout << -1;
    else
        cout << a+b;
    return 0;
}
