#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define MOD 1000000007
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef unsigned long long int ll;
using namespace std;

int main()
{
    int j,tc;
    sf(tc);
    ll k;
    rep(j,tc)
    {
        cin>>k;
        pf("Case %d: ",j);
        ll d=ceil((-1+(ceil(sqrt(1+8*k))))/2);
        k+=(k-d);
        cout<<k<<endl;
    }
}
