#include <bits/stdc++.h>0
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io;
    int X,Y;
    cin>>X>>Y;
    if(X<Y)
    {
    for(int i=X+1;i<Y;i++)
    {
        if((i%5==2)||(i%5==3))
        {
            cout<<i<<"\n";
        }
    }
    }
    else
    {
    for(int i=Y+1;i<X;i++)
    {
        if((i%5==2)||(i%5==3))
        {
            cout<<i<<"\n";
        }
    }
    }
}
