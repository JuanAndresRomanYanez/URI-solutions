#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    optimizar_io;
    int N, cont, tc;
    cin >> N;
    string V[N];
    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
    }
    for (int j = 0; j < N; j++)
    {
        cont = 0;
        tc=V[j].length();
        for (int a = 0; a < tc; a++)
        {
            switch(V[j].at(a))
            {
                case '1': cont += 2; break;
                case '2': cont += 5; break;
                case '3': cont += 5; break;
                case '4': cont += 4; break;
                case '5': cont += 5; break;
                case '6': cont += 6; break;
                case '7': cont += 3; break;
                case '8': cont += 7; break;
                case '9': cont += 6; break;
                case '0': cont += 6; break;
            }
        }
        cout << cont << " leds" << "\n";
    }
}
