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
#define N 2005
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
vector<int>grid[N];
int ara[N],d[N],low[N];
int n,m,dt,cnt;
stack<int>s;
void reset()
{
    int i;
    rep0(i,n)
        grid[i].clear();
    while(!s.empty())
        s.pop();
}
void dfs(int u)
{
    dt++;
    d[u]=dt;
    low[u]=dt;
    s.push(u);
    int i;
    rep0(i,grid[u].size())
    {
        int v=grid[u][i];
        if(!d[v])
        {
	        dfs(v);
	        low[u]=min(low[u],low[v]);
        }
        else if(!ara[v])
            low[u]=min(low[u],d[v]);
    }
    if(low[u]==d[u])
    {
        cnt++;
        int v;
        do
        {
            v=s.top();
            s.pop();
            ara[v]=cnt;
        }while(v!=u);
    }
}
void scc(int n)
{
    mem(ara,0);
    mem(d,0);
    int i;
    rep0(i,n)
    {
        if(!d[i])
            dfs(i);
    }
}
int main()
{
    while(1)
    {
        int i,a,b,w;
        sff(n,m);
        if(n+m==0)
            return 0;
        reset();
        rep0(i,m)
        {
            sfff(a,b,w);
            a--,b--;
            grid[a].pb(b);
            if(w==2)
                grid[b].pb(a);
        }
        dt=0;
        cnt=0;
        scc(n);
        if(cnt==1)
            puts("1");
        else
            puts("0");
    }
}
