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
typedef long long int ll;
using namespace std;
int main()
{
    string a;
    int tc,i,j;
    long long sum,p;
    sf(tc);
    for(j=1;j<=tc;j++)
    {
        cin>>a>>p;
        if(p<0)
            p=-p;
        sum=0;
        for(i=0;i<a.size();i++)
        {
            if(a[i]=='-')
                continue;
            sum+=(a[i]-'0');

            if(sum>=p)
                sum%=p;
            if(i!=a.size()-1 && sum<p)
                sum*=10;
            else if(i==a.size()-1 && sum>p)
                sum%=p;
        }
        pf("Case %d: ",j);
        (sum==0)?puts("divisible"):puts("not divisible");
    }
}
