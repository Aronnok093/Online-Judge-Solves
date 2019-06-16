#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 2005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
vector<int>fail(N);
void get_fail(string p)
{
    int i,k=0,m=p.size();
    fail[0]=0;
    rep(i,m)
    {
        while(k>0 && p[k]!=p[i])
            k=fail[k-1];
        if(p[k]==p[i])
            k++;
        fail[i]=k;
    }
}
bool KMP(string txt,string pat)
{
    int n=txt.size(),m=pat.size();
    int i,q=0;
    rep0(i,n)
    {
        while(q>0 && pat[q]!=txt[i])
            q=fail[q-1];
        if(pat[q]==txt[i])
            q++;
        if(q==m)
        {
            q=fail[q-1];
            return true;
        }
    }
    return false;
}
int main()
{
    FAST;
    string a,b;
    cin>>a;
    a+=a;
    get_fail(a);
    int q;
    cin>>q;
    while(q--)
    {
        cin>>b;
        if(b.size()>a.size()/2 || !KMP(a,b))
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
}
