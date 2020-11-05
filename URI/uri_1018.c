///Banknotes
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
     int a,r,e;



        a=n/100;
        n=n%100;

        cout<<a<<" nota(s) de R$ 100,00"<<endl;

        a=n/50;
        n=n%50;
                cout<<a<<" nota(s) de R$ 50,00"<<endl;

        a=n/20;
        n=n%20;
                cout<<a<<" nota(s) de R$ 20,00"<<endl;

        a=n/10;
        n=n%10;
                cout<<a<<" nota(s) de R$ 10,00"<<endl;

         a=n/5;
         n=n%5;
                 cout<<a<<" nota(s) de R$ 5,00"<<endl;
          a=n/2;
          n=n%2;
                  cout<<a<<" nota(s) de R$ 2,00"<<endl;
           a=n/1;
           n=n%1;
                   cout<<a<<" nota(s) de R$ 1,00"<<endl;







    return 0;
}
