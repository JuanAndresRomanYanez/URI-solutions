#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
   optimizar_io;
   double a;
   cin>>a;
   if(a<=2000.00)
   {
       cout<<"Isento\n";
   }
   if(a>2000.00 && a<=3000.00)
    {
        cout<<fixed<<setprecision(2)<<"R$ "<<(a-2000)*0.08<<"\n";
   }
   if(a>3001.00 && a<=4500.00)
   {
       cout<<fixed<<setprecision(2)<<"R$ "<<((a-3000)*0.18)+80<<"\n";
   }
   if(a>4500.00)
   {
       cout<<fixed<<setprecision(2)<<"R$ "<<((a-4500)*0.28)+350<<"\n";
   }
}
