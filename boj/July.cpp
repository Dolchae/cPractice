//11720 
for(int i=0;i<n;i++) {
        ans += s[i]-48; #string s
    }
    cout << ans;



//25377 
#include <iostream>

using namespace std;

int main() {
    int n,i,ans=0x3f3f3f3f;
    cin >> n;
    int a[n], b[n];
    for(i=0;i<n;i++) {
        cin >> a[i] >> b[i];
    }
    for(i=0;i<n;i++) {
        if(b[i]>=a[i]) {
            ans = min(b[i],ans);
        }

    }
    if(ans == 0x3f3f3f3f)
        ans = -1;
    cout << ans;


    return 0;
}


//25191
#include <iostream>

using namespace std;

int main() {
   int n,a,b,ans=0;
   cin >> n;
   cin >> a >> b;

   a /= 2;
   ans = a+b;
   if(ans>n)
       cout << n;
   else
       cout << ans;

    return 0;
}


//25286
#include <iostream>

using namespace std;

int main() {
   int t,i;
   cin >> t;
   int y[t],m[t];
   for(i=0;i<t;i++) {
       cin >> y[i] >> m[i];
   }

   for(i=0;i<t;i++) {
       if(m[i]==1) {
           cout << y[i]-1 << " 12 31\n";
       }
       else if(m[i]==3) {
           if((y[i]%4==0&&y[i]%100!=0) || (y[i]%400==0)) {
               cout << y[i] << " 2 29\n";
           }
           else
               cout << y[i] << " 2 28\n";
       }
       else if(m[i]-1==4 || m[i]-1==6 || m[i]-1==9 || m[i]-1==11)
           cout << y[i] << " " << m[i]-1 << " 30\n";
       else
           cout << y[i] << " " << m[i]-1 << " 31\n";
   }

    return 0;
}


//25285
#include <iostream>

using namespace std;

int main() {
   int t,i;
   float height,weight,BMI;
   cin >> t;
   int ans[t];
   for(i=0;i<t;i++) {
       cin >> height >> weight;
       height *= 0.01;
       BMI = weight/(height*height);
       if(height<1.401)
           ans[i] = 6;
       else if(height<1.46)
           ans[i] = 5;
       else if(height<1.59)
           ans[i] = 4;
       else if(height<1.61) {
           if(BMI<16.0 || BMI>=35.0)
               ans[i] = 4;
           else
               ans[i] = 3;
       }
       else if(height<2.04) {
           if(BMI>=20.0 && BMI<25.0)
               ans[i] = 1;
           else if((BMI>=18.5&&BMI<20.0) || (BMI>=25.0&&BMI<30.0))
               ans[i] = 2;
           else if((BMI>=16.0&&BMI<18.5) || (BMI>=30.0&&BMI<35.0))
               ans[i] = 3;
           else
               ans[i] = 4;
       }
       else
           ans[i] = 4;
   }

   for(i=0;i<t;i++) {
       cout << ans[i] << "\n";
   }
    return 0;
}


//5086
#include <iostream>

using namespace std;

int main() {
    int n1,n2;
    cin >> n1 >> n2;
    while(n1!=0 && n2!=0) {
        if(n2%n1==0)
            cout << "factor\n";
        else if(n1%n2==0)
            cout << "multiple\n";
        else
            cout << "neither\n";
        cin >> n1 >> n2;
    }

    return 0;
}


//1083
#include <iostream>

using namespace std;

int main() {
   int i,n,student,apple,ans=0;
   cin >> n;
   for(i=0;i<n;i++) {
       cin >> student >> apple;
       while(apple%student!=0)
       {
           apple--;
           ans++;
       }

   }
   cout << ans;

    return 0;
}
