#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 300005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<long long int,long long int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,n;
        sf(n);
        vector<pi>vec;
        ll x=0,y=0,a,b;
        rep0(i,n)
        {
            sll(a,b);
            vec.pb({a,b});
            x+=max(0LL,a-y);
            y=b;
        }
        ll p=x,q=x;
        for(i=1;i<n;i++)
        {
            ll cnt=q;
            cnt-=vec[i-1].fi;
            cnt+=vec[i].fi;
            cnt-=max(0LL,vec[i].fi-vec[i-1].se);
            ll j=i-2;
            if(j<0)
                j=n-1;
            cnt+=max(0LL,vec[i-1].fi-vec[j].se);
            q=cnt;
            p=min(cnt,p);
        }
        pf("%lld\n",p);
    }
}
