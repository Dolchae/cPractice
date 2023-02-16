#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    float score[n];
    for(int i=0;i<n;i++)
        cin >> score[i];

    int M = score[0];

    for(int i=0;i<n;i++)
    {
        if(M<score[i])
            M = score[i];
    }
    for(int i=0;i<n;i++)
        score[i] = score[i]/M*100;

    float ans;
    for(int i=0;i<n;i++)
        ans += score[i];
    ans /= n;

    cout << ans;

    return 0;
}
