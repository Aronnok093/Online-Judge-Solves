#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int n,i,a;
    cin>>n;
    int ara[n+1],ara2[n+1];
    set<int>st;
    set<int>::reverse_iterator it;
    for (i=0;i<n;i++)
    {
        cin>>a;
        ara[i]=a;
        st.insert(a);
        ara2[i]=0;
    }
    int p=1;
    for (it=st.rbegin();it!=st.rend();it++)
    {
        int k=*it,cnt=0;
        for (i=0;i<n;i++)
        {
            if(ara[i]==k)
            {
                ara2[i]=p;
                cnt++;
            }
        }
        p+=cnt;
    }
    for (i=0;i<n;i++)
        cout<<ara2[i]<<" ";
}
