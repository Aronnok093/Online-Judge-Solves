#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define MOD 1000000007
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;

int main()
{
    int j,tc;
    sf(tc);
    rep(j,tc)
    {
        string a;
        cin>>a;
        int i,cnt;
        bool chk=false;
        vector<int>vec;
        pf("Case %d: ",j);
        for (i=0;i<a.size();i++)
        {
            cnt=1;
            int k=a[i];
            while(a[i+1]==a[i])
            {
                i++;
                cnt++;
                if(cnt>9 && !chk)
                {
                    puts("-1");
                    chk=true;
                    break;
                }

            }
            vec.pb(cnt);
            vec.pb(k-48);
        }
        if(chk)
            continue;
        for (i=0;i<vec.size();i++)
            cout<<vec[i];
        cout<<endl;
    }
}
