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
#define fi first
#define se second
#define MOD 1000000007
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    string a;
    cin>>a;
    if (n==1)
        puts("YES");
    else if(n>26)
        puts("YES");
    else
    {
        set<char>st;
        for (i=0;i<a.size();i++)
            st.insert(a[i]);
        if(st.size()==n)
            puts("NO");
        else
            puts("YES");
    }
}
