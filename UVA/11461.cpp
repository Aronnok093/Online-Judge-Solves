#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;

int main()
{

    int a,b,c,d,ans;
    float f;

    while(scanf("%d%d",&a,&b)==2 && (a!=0 || b!=0))
    {
    f=sqrt(a);
    c=sqrt(a);
    d=sqrt(b);
    ans=d-c;

    if(f==c)
        ans=ans+1;

    cout<<ans<<endl;
    }
    return 0;
}
