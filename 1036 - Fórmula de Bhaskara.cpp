#include<iostream>
#include<iomanip>
#include<math.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io;
    double A,B,C,cont1,cont2,D;
    cin>>A>>B>>C;
    D=(pow(B,2)-(4*A*C));
    cont1=(-B+sqrt(D))/(2*A);
    cont2=(-B-sqrt(D))/(2*A);
    if(A!=0 && D>0)
    {
    cout<<fixed<<setprecision(5)<<"R1 = "<<cont1<<"\nR2 = "<<cont2<<endl;
    }
    else
    {
    cout<<"Impossivel calcular\n";
    }
}
