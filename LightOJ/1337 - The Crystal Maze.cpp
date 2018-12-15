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
#define N 501
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m,cnt;
int cost[N][N];
bool vis[N][N];
string a[N];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
void setvalue()
{
    int i,j;
    rep0(i,n)
    {
        rep0(j,m)
        {
            vis[i][j]=false;
            cost[i][j]=-1;
        }
    }
}
bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<m && a[x][y]!='#' && !vis[x][y])
        return true;
    return false;
}
void dfs(int x,int y)
{
    vis[x][y]=true;
    if(a[x][y]=='C')
        cnt++;
    int i;
    rep0(i,4)
    {
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(valid(xx,yy))
            dfs(xx,yy);
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,q,j;
        sfff(n,m,q);
        setvalue();
        rep0(i,n)
            cin>>a[i];
        int x,y;
        pf("Case %d:\n",t);
        while(q--)
        {
            sff(x,y);
            memb(vis);
            x--;y--;
            cnt=0;
            if(cost[x][y]==-1)
            {
                dfs(x,y);
                pf("%d\n",cnt);
                cost[x][y]=cnt;
                rep0(i,n)
                {
                    rep0(j,m)
                    if(vis[i][j])
                        cost[i][j]=cnt;
                }
            }
            else
                pf("%d\n",cost[x][y]);
        }
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
