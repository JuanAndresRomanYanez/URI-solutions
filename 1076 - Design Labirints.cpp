#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int cont=0;
const int MAX=100005;
bool vis[MAX];
vector<vector<int> >g;
static void dfs(int u)
{
    vis[u]=true;
    for(int i=0;i<g[u].size();++i){
        int yolo=g[u][i];
            if(vis[yolo]==false){
                dfs(yolo);
                cont+=2;
            }
    }
}
int main()
{
    optimizar_io;
    int lol,n,a,x,y,s;
    cin>>lol;
    while(lol--){
        cin>>s>>n>>a;
        g.assign(n+5, vector<int>());
        memset(vis,false,sizeof vis);
        for(int i=0;i<a;++i){
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        dfs(s);
        cout<<cont<<"\n";
        cont=0;
    }
    return 0;
}
