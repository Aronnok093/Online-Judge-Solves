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
    int i;
    string a;
    cin>>a;
    bool chk=true;
    for (i=1;i<a.size();i++)
    {
        if(a[i]>='a' && a[i]<='z')
            chk=false;

    }
    if(chk)
    {
        for (i=0;i<a.size();i++)
        {
            if (a[i]>='A' && a[i]<='Z')
                a[i]+=32;
            else
                a[i]-=32;
        }
    }
    cout<<a<<endl;
}
