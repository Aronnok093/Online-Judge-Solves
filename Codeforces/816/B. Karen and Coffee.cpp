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
#define N 200005
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
struct fenwick
{
    int x;
    vector<int>tree;
    fenwick(int n):x(n)
    {
        tree.resize(n+1);
    }
    void update(int pos,int val)
    {
        while(pos<=x)
        {
            tree[pos]+=val;
            pos+=(pos&-pos);
        }
    }
    void update(int l,int r,int val)
    {
        update(l,val);
        update(r+1,-val);
    }
    int query(int pos)
    {
        int sum=0;
        while(pos)
        {
            sum+=tree[pos];
            pos-=(pos&-pos);
        }
        return sum;
    }
};
int main()
{
    fenwick fnw(N);
    int i,n,k,q,l,r;
    sfff(n,k,q);
    rep0(i,n)
    {
        sff(l,r);
        fnw.update(l,r,1);
    }
    vector<int>vec;
    rep(i,N-1)
    {
        if(fnw.query(i)>=k)
            vec.pb(i);
    }
    while(q--)
    {
        sff(l,r);
        int x=lower_bound(all(vec),l)-vec.begin();
        int y=upper_bound(all(vec),r)-vec.begin();
        pf("%d\n",y-x);
    }
}
