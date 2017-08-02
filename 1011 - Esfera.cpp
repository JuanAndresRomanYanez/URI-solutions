#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int R;
    cin>>R;
    cout<<fixed<<setprecision(3)<<"VOLUME = "<<(4/3.0)*3.14159*pow(R,3)<<endl;
}
