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
ll ara[N],n;
int bs(int low,int high,ll num)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(ara[mid]==num)
            return mid+1;
        else if(num>ara[mid])
            low=mid+1;
        else if(num<ara[mid])
            high=mid-1;
    }
}
int main()
{
    sf(n);
    ll i,q,k;
    rep0(i,n)
        sf(ara[i]);
    sort(ara,ara+n);
    sf(q);
    while(q--)
    {
        sf(k);
        pf("%d\n",bs(0,n-1,k));
    }
}
