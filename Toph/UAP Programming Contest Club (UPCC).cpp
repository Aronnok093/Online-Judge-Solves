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
    int t;
    sf(t);
    getchar();
    while(t--)
    {
        string a;
        int cnt=0,u=0,p=0,c=0,i;
        cin>>a;
        for (i=0;i<a.size();i++)
        {
            if(a[i]=='U')
                u++;
            else if(a[i]=='P')
                p++;
            else if(a[i]=='C')
                c++;
        }
        while(u-1>=0 && p-1>=0 && c-2>=0)
        {
            cnt++;
            u--;p--;
            c-=2;
        }
        cout<<cnt<<endl;
    }
}
