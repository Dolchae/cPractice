#include <iostream>

using namespace std;

int main()
{
    int h,m,t;
    cin >> h >> m;
    
    if(h==0)
    {
        h=24;
    }
    
    t = (h*60+m)-45;
    h=t/60;
    m=t%60;
    
    if(h==24)
    {
        h=0;
    }
        
    cout << h << " " << m;

    return 0;
}
