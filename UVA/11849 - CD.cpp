#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%lld",&num)
#define sff(num1,num2) scanf("%lld %lld",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    ll n,m;
    while(1)
    {
        sff(n,m);
        if(n==0 && m==0)
            break;
        vector<ll>vec,vec2;
        ll i,k;
        rep0(i,n)
        {
            sf(k);
            vec.pb(k);
        }
        ll p=0;
        rep0(i,m)
        {
            sf(k);
            vec2.pb(k);
            if(n>=m)
            {
                if(binary_search(vec.begin(),vec.end(),k))
                    p++;
            }
        }
        if(n>=m)
        {
            cout<<p<<endl;
            continue;
        }
        else
        {
            p=0;
            rep0(i,n)
            {
                if(binary_search(vec2.begin(),vec2.end(),vec[i]))
                    p++;
            }
            cout<<p<<endl;
        }
    }
}
