#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
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
    int tc,j=1;
    sf(tc);
    while(tc--)
    {
        int i,n,k,sum=0;
        int ara[10],p;
        rep0(i,6)
        {
            cin>>k;
            ara[i]=k;
            sum+=k;
        }
        cin>>n;
        n-=sum;
        sum=0;
        rep0(i,6)
        {
            cin>>k;
            sum+=k;
        }
        p=sum-n;
        if(p<0)
            p=0;
        pf("Case %d: %d\n",j++,p);
    }
}
