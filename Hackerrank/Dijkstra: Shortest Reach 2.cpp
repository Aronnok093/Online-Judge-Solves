#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define inf 0x3f3f3f3f
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
vector<pi>grid[3003];
vector<int>dist;
int n,m,i,src;
priority_queue<pi,vector<pi>,greater<pi>>pq;
void setwt()
{
    rep0(i,n+1)
    {
        dist[i]=1e9;
        grid[i].clear();
    }
}
void dijkstra()
{
    dist[src]=0;
    pq.push(mpp(0,src));
    while(!pq.empty())
    {
        pi p=pq.top();
        pq.pop();
        int w=p.fi;
        int u=p.se;
        if(w>dist[u])
            continue;
        rep0(i,grid[u].size())
        {
            pi pr=grid[u][i];
            int v=pr.fi;
            int c=pr.se;
            if(dist[v]>dist[u]+c)
            {
                dist[v]=dist[u]+c;
                pq.push(mpp(dist[v],v));
            }
        }
    }
}
void printpathcost()
{
    rep(i,n)
    {
        if(i!=src)
        {
            if(dist[i]==1e9)
                pf("-1 ");
            else
                pf("%d ",dist[i]);
        }
    }
    puts("");
}
int main()
{
    rep0(i,3003)
        dist.pb(1e9);
    int tc,t;
    sf(tc);
    rep(t,tc)
    {
        sff(n,m);
        int a,b,w;
        setwt();
        rep0(i,m)
        {
            sfff(a,b,w);
            grid[a].pb(mpp(b,w));
            grid[b].pb(mpp(a,w));
        }
        sf(src);
        dijkstra();
        printpathcost();

    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
