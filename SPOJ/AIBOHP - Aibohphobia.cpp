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

int lcs(string a,string b,int m,int n)
{
   int L[m+1][n+1];
   int i,j;

   for (i=0;i<=m;i++)
   {
     for (j=0;j<=n;j++)
     {
       if (i==0 || j==0)
         L[i][j]=0;

       else if (a[i-1]==b[j-1])
         L[i][j]=L[i-1][j-1]+1;

       else
         L[i][j]=max(L[i-1][j],L[i][j-1]);
     }
   }
   return L[m][n];
}

int main()
{
    int tc;
    sf(tc);
    while(tc--)
    {
        int i;
        string a,b="";
        cin>>a;
        for(i=a.size()-1;i>=0;i--)
            b.pb(a[i]);

        int m=a.size();
        cout<<m-lcs(a,b,m,m)<<endl;
    }
}
