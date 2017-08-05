#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
   optimizar_io;
   int a,cont=5,c=0,c1=0,c2=0,c3=0;
   while(cont-- && cin>>a)
   {
       if(a%2==0){c++;}
       else{c1++;}
       if(a>0){c2++;}
       if(a<0){c3++;}
   }
   cout<<c<<" valor(es) par(es)\n"<<c1<<" valor(es) impar(es)\n"<<c2<<" valor(es) positivo(s)\n"<<c3<<" valor(es) negativo(s)\n";
}
