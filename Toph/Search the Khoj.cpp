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
    string a;
    getline(cin,a);
    set<char>st;;
    set<char>::iterator it;
    int i;
    for (i=0;i<a.size();i++)
        st.insert(a[i]);
    for (it=st.begin();it!=st.end();it++)
        cout<<*it<<endl;
}
