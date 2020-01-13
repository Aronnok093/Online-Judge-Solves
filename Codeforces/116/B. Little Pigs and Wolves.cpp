#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 15
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
int n,m,ans=0;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
string a[N];
bool valid(int x,int y)
{
    return x>=0 && x<n && y>=0 && y<m && a[x][y]=='P';
}
void floodfill()
{
    int i,j,k,x,y;
    rep0(i,n)
    {
        rep0(j,m)
        {
            if(a[i][j]=='W')
            {
                rep0(k,4)
                {
                    x=i+dx[k];
                    y=j+dy[k];
                    if(valid(x,y))
                    {
                        ans++;
                        a[x][y]='.';
                        break;
                    }
                }
            }
        }
    }
}
int main()
{
    int i,j,x,y;
    cin>>n>>m;
    rep0(i,n)
        cin>>a[i];
    floodfill();
    pf("%d",ans);
}
