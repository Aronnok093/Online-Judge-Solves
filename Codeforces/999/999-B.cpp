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
typedef long long ll;
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    getchar();
    string a;
    cin>>a;
    deque<int>dq;
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
            dq.push_back(i);
    }
    dq.pop_front();

    while(!dq.empty())
    {
        int k=dq.front();
        string b=a.substr(0,k);
        reverse(b.begin(),b.end());
        for (int l=0;l<b.size();l++)
            a[l]=b[l];
        dq.pop_front();
    }
    cout<<a<<endl;
}
