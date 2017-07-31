#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io;
    float X,Y;
    cin>>X>>Y;
    if((X>0)&&(Y>0))
    {
        cout<<"Q1"<<"\n";
    }
    if((X<0)&&(Y>0))
    {
    cout<<"Q2"<<"\n";
    }
    if((X<0)&&(Y<0))
    {
        cout<<"Q3"<<"\n";
    }
    if((X>0)&&(Y<0))
    {
        cout<<"Q4"<<"\n";
    }
    if ((X==0)&&(Y!=0))
    {
        cout <<"Eixo Y"<<"\n";
    }
    if ((X!=0)&&(Y==0))
    {
        cout <<"Eixo X"<<"\n";
    }
    if((X==Y)&&(Y==0))
    {
    cout<<"Origem"<<"\n";
    }
}
