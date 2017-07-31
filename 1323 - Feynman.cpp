#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io;
    long N;
    cin>>N;
    while((N>=1)&&(N<=100))
    {
        long V[N+1];
        V[0]=0;
        for(int i=1;i<=N;i++)
        {
            V[i]=V[i-1]+pow(i,2);
        }
        cout<<V[N]<<"\n";
        cin>>N;
     }
}
