#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int ans = 317;
    int s=0,b=0,n,i=1;

    while(true)
    {
        cout << "[" << i <<"번째 시도] 숫자를 맞춰보세요: ";
        cin >> n;

        int ans_first = ans/100;
        int ans_second = (ans%100)/10;
        int ans_third = ans%10;
        int first = n/100;
        int second = (n%100)/10;
        int third = n%10;

        if(first==ans_first)
            s++;
        if(second==ans_second)
            s++;
        if(third==ans_third)
            s++;

        if((first==ans_second||first==ans_third)&&first!=ans_first)
            b++;
        if((second==ans_first||second==ans_third)&&second!=ans_second)
            b++;
        if((third==ans_first||third==ans_second)&&third!=ans_third)
            b++;


        if(s==3)
            break;

        cout << s << "S" << " " << b << "B\n";


        i++; s=0,b=0;
    }

    cout << i << "번만에 정답을 맞추셨습니다!";



    return 0;
}
