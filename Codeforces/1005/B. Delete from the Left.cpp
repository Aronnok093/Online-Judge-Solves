#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
typedef long long int ll;
using namespace std;

int main()
{
    string a,b;
    int i,cnt=0;
    cin>>a>>b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int lim=a.size();
    if(a.size()>b.size())
        lim=b.size();
    for (i=0;i<lim;i++)
    {
        if(a[i]==b[i])
            cnt+=2;
        else
            break;
    }
    cout<<a.size()+b.size()-cnt<<endl;
}
