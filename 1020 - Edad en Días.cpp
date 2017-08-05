#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io;
    int a;
    cin>>a;
    cout<<a/365<<" ano(s)"<<endl<<(a-((a/365)*365))/30<<" mes(es)"<<endl<<(a-((a/365)*365))-((a-((a/365)*365))/30)*30<<" dia(s)"<<endl;
}
