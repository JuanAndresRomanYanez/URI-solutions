#include<bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io;
    string a,b,c;
    cin>>a>>b>>c;
    if(a=="vertebrado")
    {
        if(b=="ave")
        {
            if(c=="carnivoro"){cout<<"aguia"<<"\n";}
            else{cout<<"pomba"<<"\n";}
        }
        else
        {
            if(c=="onivoro"){cout<<"homem"<<"\n";}
            else{cout<<"vaca"<<"\n";}
        }
    }
    else
    {
        if(b=="inseto")
        {
           if(c=="hematofago"){cout<<"pulga"<<"\n";}
           else{cout<<"lagarta"<<"\n";}
        }
        else
        {
            if(c=="hematofago"){cout<<"sanguessuga"<<"\n";}
            else{cout<<"minhoca"<<"\n";}
        }
    }
}
