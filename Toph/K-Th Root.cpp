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
#define N 1000005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
bool mark[N];
vector<int>prime;
unordered_map<ll,ll>mp;
void sieve()
{
    int i,j;
    memset(mark,true,sizeof(mark));
    for(i=4;i<N;i+=2)
        mark[i]=false;
    for(i=3;i*i<N;i+=2)
    {
        if(mark[i])
        {
            for(j=i*i;j<N;j+=i*2)
                mark[j]=false;
        }
    }
    mark[1]=false;
    prime.pb(2);
    for(i=3;i*i<=N;i+=2)
    {
        if(mark[i])
            prime.pb(i);
    }
}
void primefact(ll n)
{
    while(n%2==0)
    {
        mp[2]++;
        n/=2;
    }
    int i;
    for(i=1;i<sz(prime) && ll(sq(prime[i]))<=n;i++)
    {
        while(n%prime[i]==0)
        {
            n/=prime[i];
            mp[prime[i]]++;
        }
    }
    if(n>1)
        mp[n]++;
}
int main()
{
    sieve();
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        ll a,b;
        sll(a,b);
        if(mark[a])
        {
             pf("Case #%d: %lld\n",t,b);
             continue;
        }
        mp.clear();
        primefact(a);
        ll g=-1;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(g==-1)
                g=it->se;
            else
                g=__gcd(g,it->se);
        }
        ll ans=g*b;
        pf("Case #%d: %lld\n",t,ans);
    }
}
