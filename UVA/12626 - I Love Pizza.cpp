#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define autto(it,mp) for(auto it=mp.begin();it!=mp.end();it++)
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int tc;
    sf(tc);
    map<char,int>mp;
    getchar();
    while(tc--)
    {
        string a;
        cin>>a;

        int i;
        rep0(i,a.size())
            mp[a[i]]++;
        int k;
        set<int>st;
        st.insert(mp['A']/3);
        st.insert(mp['R']/2);
        st.insert(mp['G']);
        st.insert(mp['I']);
        st.insert(mp['T']);
        st.insert(mp['M']);
        if(st.size()==0)
            pf("0\n");
        else
            cout<<*st.begin()<<endl;
        st.clear();
        mp.clear();
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
