#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%lld",&num)
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
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int main()
{
    int n,i;
    ll k,p;
    vector<ll>vec;
    vector<ll>::iterator it,it2;
    scanf("%d",&n);
    rep0(i,n)
    {
        sf(k);
        vec.pb(k);
    }
    sort(all(vec));
    int q;
    scanf("%d",&q);
    while(q--)
    {
        sf(p);
        it=lower_bound(all(vec),p);
        it2=upper_bound(all(vec),p);
        int low=it-vec.begin(),high=it2-vec.begin();
        low--;
        if(low==-1)
            pf("X ");
        else
            pf("%lld ",vec[low]);
        if(high==n)
            pf("X\n");
        else
            pf("%lld\n",vec[high]);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
