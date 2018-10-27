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
#define all(x) (x).begin(),(x).end()
#define autto for(auto it=mp.begin();it!=mp.end();it++)
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int par[1000001],rnk[1000001];
int ara[1000001],i;
void makeset(int n)
{
    for(i=1;i<=n;i++)
    {
        par[i]=i;
        rnk[i]=0;
        ara[i]=0;
    }
}
int findpar(int n)
{
    if(par[n]==n)
        return n;
    else
        return par[n]=findpar(par[n]);
}
void dsu(int x,int y)
{
    int xx=findpar(x),yy=findpar(y);
    if(xx!=yy)
    {
        if(rnk[xx]>rnk[yy])
            par[yy]=xx;
        else
        {
            par[xx]=yy;
            if(rnk[xx]==rnk[yy])
                rnk[yy]++;
        }
    }
}
int main()
{

    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int n,i,m,a,b;
        sff(n,m);
        makeset(n);
        rep0(i,m)
        {
            sff(a,b);
            dsu(a,b);
        }
        int mx=INT_MIN;
        rep(i,n)
        {
            int k=findpar(i);
            ara[k]++;
            mx=max(mx,ara[k]);
        }
        cout<<mx<<endl;
    }
    //cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
}
