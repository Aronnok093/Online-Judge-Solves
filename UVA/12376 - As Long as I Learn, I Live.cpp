#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int n,m,wt[N],last,cost;
vector<int>grid[N];
bool vis[N];
void reset()
{
    int i;
    rep0(i,n)
    {
        vis[i]=false;
        grid[i].clear();
    }
}
void bfs(int s)
{
    vis[s]=true;
    queue<int>q;
    q.push(s);
    int i,u,v;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        if(!grid[u].size())
            continue;
        int i,v,mx=-1;
        rep0(i,grid[u].size())
        {
            v=grid[u][i];
            if(vis[v])
                continue;
            if(wt[v]>mx)
            {
                mx=wt[v];
                last=v;
            }
        }
        cost+=mx;
        vis[last]=true;
        q.push(last);
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        sff(n,m);
        reset();
        int i,a,b;
        rep0(i,n)
            sf(wt[i]);
        rep0(i,m)
        {
            sff(a,b);
            grid[a].pb(b);
        }
        cost=0;
        bfs(0);
        pf("Case %d: %d %d\n",t,cost,last);
    }
}
