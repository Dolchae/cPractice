#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string s,p;
    int r,n,a;

    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> r >> s;

        for(a=0; ;a++)
        {
            if(s[a]==false)
                break;
        }

        for(int m=0;m<a;m++)
        {
            for(int j=0;j<r;j++)
                p += s[m];
        }

        cout << p << "\n";
        p="";

    }




    return 0;
}
