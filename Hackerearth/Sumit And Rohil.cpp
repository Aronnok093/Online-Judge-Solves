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
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<string,string>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
bool comp(pi a,pi b)
{
    if(a.fi==b.fi)
        return a.se<b.se;
    return a.fi<b.fi;
}
int main()
{
    FAST;
    string a,b;
    int i,n,k;
    vector<pi>vec;
    cin>>n;
    rep0(i,n)
    {
        cin>>a;
        b=a[0];
        b+=a[sz(a)-1];
        sort(all(a));
        vec.pb({a,b});
    }
    sort(all(vec),comp);
    i=0;
    int cnt=0;
    while(i<n)
    {
        string a=vec[i].fi,b=vec[i].se;
        while(vec[i].fi==a && vec[i].se==b && i<n)
            i++;
        cnt++;
    }
    cout<<cnt;
}
