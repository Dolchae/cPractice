#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];


    for(int i=0;i<n;i++)
    {
        cin >> a[i];

    }
    int maxi = a[0], mini = a[0];

    for(int i=0;i<n;i++)
    {
        if(maxi<a[i]){
            maxi = a[i];
        }

        if(mini>a[i])
            mini = a[i];
    }
    cout << mini << " " << maxi;

    return 0;
}
