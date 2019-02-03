#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
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
#define N 250
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define vi vector<int>
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
ll n,dp[N][N];
vector<ll>vec[N];
ll func(int i,int j)
{
    int lim=vec[i].size();
    if(i>=0 && i<2*n-1 && j>=0 && j<lim)
    {
        if(dp[i][j]!=-1)
            return dp[i][j];
        ll res=-1;
        res=max(res,vec[i][j]+func(i+1,j));
        if(i<n-1)
            res=max(res,vec[i][j]+func(i+1,j+1));
        else if(i>=n-1)
            res=max(res,vec[i][j]+func(i+1,j-1));
        return dp[i][j]=res;
    }
    else
        return 0;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        sl(n);
        int i,j,k=0,f=1;
        ll p;
        rep0(i,2*n-1)
        {
            if(k==n)
                f=-1;
            k+=f;
            for(j=0;j<k;j++)
            {
                sl(p);
                vec[i].pb(p);
            }
        }
        mem(dp,-1);
        func(0,0);
        pf("Case %d: %lld\n",t,dp[0][0]);
        rep0(i,2*n-1)
            vec[i].clear();
    }
}
