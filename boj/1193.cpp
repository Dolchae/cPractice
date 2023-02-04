#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n,a=0,b;
    cin >> n;

    // i = 몇번째 대각선 
    int i=1;
    while(i>0)
    {
        a += i;
        if(a>=n)
            break;
        i++;
    }

    //n = 몇번째 칸인지.
    // 같은 대각서(i)에 있으면 분모와 분자의 합이 같음, 그 합 = i+1 
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
